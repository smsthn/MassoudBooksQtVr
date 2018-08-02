#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MassoudBooksQtVr.h"
#include "Books.h"
#include "qstringlistmodel.h"
#include "TheListsConnector.h"
#include <memory>

class TheListsConnector;

class MassoudBooksQtVr : public QMainWindow
{
	Q_OBJECT

public:
	MassoudBooksQtVr(QWidget *parent = Q_NULLPTR);


private:
	void init_fill_lstviews();

private:
	
	Ui::MassoudBooksQtVrClass ui;

	TheListsConnector* list_connector;

	// QStringListViewModel s
	QStringListModel* m_catagories_strlstmdl;
	QStringListModel* m_reading_status_strlstmdl;
	QStringListModel* m_tags_strlstmdl;
	QStringListModel* m_books_strlstmdl;
	QStringListModel* m_book_notes_strlstmdl;
	//


signals:
	void add_book_request();
	void remove_tag_request();
	void modiry_book_request();

	void add_tag_request();


public slots:
	void refresh_books_listview(QStringList books_list);
	//void refresh_tags_listview();


};
