#include "MassoudBooksQtVr.h"
#include "ListsConnector.h"
#include "TheSerializationClass.h"
#include <qmessagebox.h>


MassoudBooksQtVr::MassoudBooksQtVr(QWidget *parent)
	: QMainWindow(parent)
{
	

	ui.setupUi(this);
}

void MassoudBooksQtVr::init_fill_lstviews()
{
	list_connector = std::make_unique<ListsConnector>();
	QStringList ctgry_str_lst;
	QStringList rd_stts_str_lst;

	list_connector->init_lists_in_window(ctgry_str_lst,rd_stts_str_lst);

	m_catagories_strlstmdl->setStringList(ctgry_str_lst);
	

	m_reading_status_strlstmdl->setStringList(rd_stts_str_lst);
}
