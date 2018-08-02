#include "MassoudBooksQtVr.h"


MassoudBooksQtVr::MassoudBooksQtVr(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);

	init_fill_lstviews();
}

void MassoudBooksQtVr::init_fill_lstviews()
{	

	list_connector = new TheListsConnector(this);
	QStringList ctgry_str_lst;
	QStringList rd_stts_str_lst;
	//auto fuck = QMessageBox::warning(this, "FuckOnce", "FuckTwice", QMessageBox::Button::Abort);
	list_connector->init_lists_in_window(ctgry_str_lst,rd_stts_str_lst);
	m_catagories_strlstmdl = new QStringListModel(this);
	m_catagories_strlstmdl->setStringList(ctgry_str_lst);
	ui.Catagories_listView->setModel(m_catagories_strlstmdl);

	m_reading_status_strlstmdl = new QStringListModel(this);
	m_reading_status_strlstmdl->setStringList(rd_stts_str_lst);
	ui.ReadingStatus_listView->setModel(m_reading_status_strlstmdl);
	

}

void MassoudBooksQtVr::refresh_books_listview(QStringList books_list)
{
	m_books_strlstmdl = new QStringListModel(this);
	m_books_strlstmdl->setStringList(books_list);
	ui.Books_listView->setModel(m_books_strlstmdl);
}
