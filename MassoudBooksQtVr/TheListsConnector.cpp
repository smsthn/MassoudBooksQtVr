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

	connect(this,SIGNAL(lstview_refresh_request(QString,QStringList)),parent,SLOT(refresh_listview(QString,QStringList)) );


	emit lstview_refresh_request("Catagories",convert_stdStrVct_to_Qstrlst(all_catagories));
	emit lstview_refresh_request("ReadingStatus", convert_stdStrVct_to_Qstrlst(all_reading_status));
	emit lstview_refresh_request("Books", convert_stdStrVct_to_Qstrlst(m_the_books->get_all_books()));
	emit lstview_refresh_request("Tags", convert_stdStrVct_to_Qstrlst(m_the_books->get_all_tags()));
}

TheListsConnector::~TheListsConnector()
{
}









void TheListsConnector::add_a_book(const std::string & name, const std::string & catagory, const std::string & reading_status, std::vector<std::string>* tags, int32_t page_number)
{
	m_the_books->add_book(name, catagory, reading_status, tags, 0, nullptr);


	emit lstview_refresh_request("Books", convert_stdStrVct_to_Qstrlst(m_the_books->get_all_books()));
}

void TheListsConnector::remove_a_book(const std::string & book_name)
{
	m_the_books->remove_book(book_name);


	emit lstview_refresh_request("Books", convert_stdStrVct_to_Qstrlst(m_the_books->get_all_books()));
}

void TheListsConnector::modify_a_book(const std::string & old_name, const std::string & name, const std::string & catagory, const std::string & reading_status, std::vector<std::string>* tags, int32_t page_number)
{
	m_the_books->modify_book(old_name, name, catagory, reading_status, tags, 0);

	emit lstview_refresh_request("Books", convert_stdStrVct_to_Qstrlst(m_the_books->get_all_books()));
}

void TheListsConnector::add_a_tag(const std::string& tag)
{
	m_the_books->add_tag(tag);


	emit lstview_refresh_request("Tags", convert_stdStrVct_to_Qstrlst(m_the_books->get_all_tags()));
}


QStringList TheListsConnector::convert_stdStrVct_to_Qstrlst(const std::vector<std::string>& vector_list)
{
	QStringList qstr_lst;
	for (const auto& str : vector_list)qstr_lst.push_back(QString::fromStdString(str));
	return qstr_lst;
}

