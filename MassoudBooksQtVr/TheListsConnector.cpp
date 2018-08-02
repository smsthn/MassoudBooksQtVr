#include "TheListsConnector.h"
#include <iostream>

TheListsConnector::TheListsConnector(QObject *parent)
	: QObject(parent)
{
	all_catagories = std::move(std::vector<std::string>{ "Any", "Math", "GameDev", "CSharp", "Java", "Cs", "Cpp", "Emmbedded", "PyAndMl", "Art", "Android" });
	all_reading_status = std::move(std::vector<std::string>{ "Any", "Reading", "WannaRead", "WannaRead2", "YetToWannaRead", "DelayedReading", "Finished", "Dropped" });

	m_the_books = create_the_books();

	//deSerialization
	{
	TheSerializationClass* sr = new TheSerializationClass();

	sr->add_tag = [&](std::string tag) {m_the_books->add_tag(tag); };
	sr->add_book = [&](const std::string & name, const std::string & catagory, const std::string & reading_status, std::vector<std::string>* tags, int32_t page_number) {
		m_the_books->add_book(name, catagory, reading_status, tags, 0, nullptr);

		
	};

	sr->deserialize_the_books("D:/MassoudBooks/prsave.dat");

	delete sr;
	}
	//

	connect(this,SIGNAL(books_lstview_refresh_request(QStringList)),parent,SLOT(refresh_books_listview(QStringList)) );



	emit books_lstview_refresh_request(convert_stdStrVct_to_Qstrlst(m_the_books->get_all_books()));
}

TheListsConnector::~TheListsConnector()
{
}


void TheListsConnector::init_lists_in_window(QStringList& catagories_lst, QStringList& reading_stts_lst)
{
	std::for_each(all_catagories.begin(), all_catagories.end(), [&](std::string ctg) {catagories_lst.push_back(QString::fromStdString(ctg)); });


	std::for_each(all_reading_status.begin(), all_reading_status.end(), [&](std::string rd_stts) {reading_stts_lst.push_back(QString::fromStdString(rd_stts)); });
}






void TheListsConnector::add_a_book(const std::string & name, const std::string & catagory, const std::string & reading_status, std::vector<std::string>* tags, int32_t page_number)
{
	m_the_books->add_book(name, catagory, reading_status, tags, 0, nullptr);

	emit books_lstview_refresh_request(convert_stdStrVct_to_Qstrlst(m_the_books->get_all_books()));
}

void TheListsConnector::remove_a_book(const std::string & book_name)
{
	m_the_books->remove_book(book_name);
	//emit books_lstview_refresh_request();
}

void TheListsConnector::modify_a_book(const std::string & old_name, const std::string & name, const std::string & catagory, const std::string & reading_status, std::vector<std::string>* tags, int32_t page_number)
{
	m_the_books->modify_book(old_name, name, catagory, reading_status, tags, 0);
	//emit books_lstview_refresh_request();
}

void TheListsConnector::add_a_tag(const std::string& tag)
{
	m_the_books->add_tag(tag);
	//emit books_lstview_refresh_request();
}

void TheListsConnector::refresh_books_lstview()
{

}

void TheListsConnector::refresh_tags_lstview()
{
}

QStringList TheListsConnector::convert_stdStrVct_to_Qstrlst(const std::vector<std::string>& vector_list)
{
	QStringList qstr_lst;
	for (const auto& str : vector_list)qstr_lst.push_back(QString::fromStdString(str));
	return qstr_lst;
}

