#include "MassoudBooksQtVr.h"


MassoudBooksQtVr::MassoudBooksQtVr(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);

	init_items();
}

/// <summary>
/// Initialize The Models And TheListConnector
/// </summary>
void MassoudBooksQtVr::init_items()
{	
	//Initialize The Models
	m_books_strlstmdl = new QStringListModel(this);
	m_book_notes_strlstmdl = new QStringListModel(this);
	m_catagories_strlstmdl = new QStringListModel(this);
	m_reading_status_strlstmdl = new QStringListModel(this);
	m_tags_strlstmdl = new QStringListModel(this);

	//Initialize TheListConnector
	list_connector = new TheListsConnector(this);
	
	
}






void MassoudBooksQtVr::refresh_listview(QString list_name, QStringList list_to_refresh)
{
	if (list_name == "Catagories")
	{
		m_catagories_strlstmdl->setStringList(list_to_refresh);
		ui.Catagories_listView->setModel(m_catagories_strlstmdl);
		return;
	}
	if (list_name == "ReadingStatus")
	{
		m_reading_status_strlstmdl->setStringList(list_to_refresh);
		ui.ReadingStatus_listView->setModel(m_reading_status_strlstmdl);
		return;
	}
	if (list_name == "Books")
	{
		m_books_strlstmdl->setStringList(list_to_refresh);
		ui.Books_listView->setModel(m_books_strlstmdl);
		return;
	}
	if (list_name == "Tags")
	{
		m_tags_strlstmdl->setStringList(list_to_refresh);
		ui.Tags_listView->setModel(m_tags_strlstmdl);
		return;
	}
	if (list_name == "BookNotes")
	{
		m_book_notes_strlstmdl->setStringList(list_to_refresh);
		ui.BookNotes_listView->setModel(m_book_notes_strlstmdl);
		return;
	}
}
