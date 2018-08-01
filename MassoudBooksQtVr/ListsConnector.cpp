#include "ListsConnector.h"







void ListsConnector::add_a_book(const std::string & name, const std::string & catagory, const std::string & reading_status, std::vector<std::string>* tags, int32_t page_number)
{
	m_the_books->add_book(name, catagory, reading_status, tags,0,nullptr);

	emit books_lstview_refresh_request();
}

void ListsConnector::remove_a_book(const std::string & book_name)
{
	m_the_books->remove_book(book_name);
	emit books_lstview_refresh_request();
}

void ListsConnector::modify_a_book(const std::string & old_name, const std::string & name, const std::string & catagory, const std::string & reading_status, std::vector<std::string>* tags, int32_t page_number)
{
	m_the_books->modify_book(old_name,name, catagory, reading_status, tags, 0);
	emit books_lstview_refresh_request();
}

void ListsConnector::add_a_tag(const std::string& tag)
{
	m_the_books->add_tag(tag);
	emit books_lstview_refresh_request();
}

void ListsConnector::refresh_books_lstview()
{

}

void ListsConnector::refresh_tags_lstview()
{
}

void ListsConnector::init_lists_in_window(QStringList& catagories_lst, QStringList& reading_stts_lst)
{
	const auto& ctgTmp = m_the_books->get_all_catagories();
	std::for_each(ctgTmp.begin(), ctgTmp.end(), [&](std::string ctg) {catagories_lst.push_back(QString::fromStdString(ctg)); });

	const auto& rdstts_tmp = m_the_books->get_all_reading_status();
	std::for_each(rdstts_tmp.begin(), rdstts_tmp.end(), [&](std::string rd_stts) {reading_stts_lst.push_back(QString::fromStdString(rd_stts)); });
}
