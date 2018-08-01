#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MassoudBooksQtVr.h"
#include "qstringlistmodel.h"
#include <memory>


class MassoudBooksQtVr : public QMainWindow
{
	Q_OBJECT

public:
	MassoudBooksQtVr(QWidget *parent = Q_NULLPTR);

private:
	void init_fill_lstviews();

private:
	typedef std::unique_ptr<QStringListModel> StrModelPtr;
	Ui::MassoudBooksQtVrClass ui;

	std::unique_ptr<ListsConnector> list_connector;

	// QStringListViewModel s
	StrModelPtr m_catagories_strlstmdl;
	StrModelPtr m_reading_status_strlstmdl;
	StrModelPtr m_tags_strlstmdl;
	StrModelPtr m_books_strlstmdl;
	StrModelPtr m_book_notes_strlstmdl;
	//


};
