#pragma once

#include <QObject>
#include <Books.h>
#include <string>
#include <vector>
#include "MassoudBooksQtVr.h"
#include "TheSerializationClass.h"
#include <algorithm>

	class TheListsConnector : public QObject
	{
		Q_OBJECT

	public:
		TheListsConnector(QObject *parent);
		~TheListsConnector();

		void init_lists_in_window(QStringList& catagories_lst, QStringList& reading_stts_lst);

	private:
		BookNmSpc::BooksPtr m_the_books;
		 std::vector<std::string> all_catagories;
		 std::vector<std::string> all_reading_status;


	signals:
		void book_add_request(const std::string& name, const std::string& catagory, const std::string& reading_status, std::vector<std::string>* tags, int32_t page_number, std::vector<std::string>*  book_notes);
		void book_modify_request(const std::string& old_name, const std::string& name, const std::string& catagory, const std::string& reading_status, std::vector<std::string>* tags, int32_t page_number);
		void book_remove_request(const std::string& book_name);

		void tag_add_request(const std::string& book_name);

		void books_lstview_refresh_request(QStringList);
		void tags_lstview_refresh_request(QStringList);



	private slots:
		void add_a_book(const std::string& name, const std::string& catagory, const std::string& reading_status, std::vector<std::string>* tags = nullptr, int32_t page_number = 0);
		void remove_a_book(const std::string& book_name);
		void modify_a_book(const std::string& old_name, const std::string& name, const std::string& catagory, const std::string& reading_status, std::vector<std::string>* tags, int32_t page_number = 0);

		void add_a_tag( const std::string& tag);

		void refresh_books_lstview();
		void refresh_tags_lstview();

		QStringList convert_stdStrVct_to_Qstrlst(const std::vector<std::string>& vector_list);

	};
	