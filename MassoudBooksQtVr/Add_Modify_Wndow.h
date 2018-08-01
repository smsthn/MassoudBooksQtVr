#pragma once

#include <QWidget>
#include "ui_Add_Modify_Wndow.h"
#include "Book.h"
#include <QStringList>

class Add_Modify_Wndow : public QWidget
{
	Q_OBJECT

public:
	Add_Modify_Wndow(QWidget *parent = Q_NULLPTR);
	void open_for_add();
	void open_for_modification(QString book_name);

	void send_add_request();
	void send_modify_request();

	void send_add_tag_request();

	~Add_Modify_Wndow();

private:
	Ui::Add_Modify_Wndow ui;

	std::string selected_book_name;
	std::string selected_catagory;
	std::string selected_reading_status;
	std::vector<std::string> selected_tags;
	int32_t selected_page_number;

	QStringList m_catagories;
	QStringList m_ReadingStatus;
	QStringList m_tags;
};
