#pragma once

#ifdef BOOKSDLL_EXPORTS  
#define BOOKSDLL_API __declspec(dllexport)   
#else  
#define BOOKSDLL_API __declspec(dllimport)   
#endif  


#include <string>
#include <vector>
#include <memory>
#include "Book.h"
namespace BookNmSpc
{

	class BOOKSDLL_API  BooksInterface
	{
		

	public:
		virtual std::vector<std::string> get_all_catagories() = 0;
		virtual std::vector<std::string> get_all_reading_status() = 0;

		virtual std::vector<std::string> get_all_books() = 0;
		virtual const std::vector<std::string>& get_all_tags() = 0;

		virtual  std::vector<std::string> get_filtered_books_list(std::vector<std::string> selected_tags, std::string selected_catagory, std::string selected_reading_status) = 0;

		virtual void add_book(std::string name, std::vector<std::string> tags, std::string catagory, std::string reading_status) = 0;
		virtual void remove_book(std::string book_name) = 0;
		virtual void modify_book(std::string old_name, std::string name, std::vector<std::string> tags, std::string catagory, std::string reading_status, int32_t page_number) = 0;
		virtual void add_tag(std::string tag) = 0;
	};
	BOOKSDLL_API typedef std::unique_ptr<BooksInterface> BooksPtr;
	typedef std::unique_ptr<BookNmSpc::Book> BookPtr;



	class Books : public BooksInterface
	{
	private:
		std::vector<BookPtr> all_books;
		std::vector<std::string> all_tags;

	public:
		Books();
		void add_book(std::string name, std::vector<std::string> tags, std::string catagory, std::string reading_status) override;
		void remove_book(std::string book_name) override;
		void modify_book(std::string old_name, std::string name, std::vector<std::string> tags, std::string catagory, std::string reading_status, int32_t page_number) override;
		void add_tag(std::string tag) override;

		//getters
		std::vector<std::string> get_all_catagories() override;
		std::vector<std::string> get_all_reading_status() override;

		std::vector<std::string> get_filtered_books_list(std::vector<std::string> selected_tags, std::string selected_catagory, std::string selected_reading_status) override;

		 std::vector<std::string> get_all_books() override;
		const std::vector<std::string>& get_all_tags() override;
		//
	};

	
} // namespace BookNmSpc
extern  BOOKSDLL_API  std::unique_ptr<BookNmSpc::BooksInterface>   create_the_books();
extern "C" BOOKSDLL_API void delete_the_books(BookNmSpc::BooksInterface* the_book);// Now Not Needed
const std::vector<std::string> all_catagories{ "Any","Math", "GameDev", "CSharp", "Java", "Cs", "Cpp", "Emmbedded", "PyAndMl", "Art", "Android" };
extern BOOKSDLL_API const std::vector<std::string>& get_all_catagories();
const std::vector<std::string> all_reading_status {"Any", "Reading", "WannaRead", "WannaRead2", "YetToWannaRead","DelayedReading","Finished","Dropped"};
extern BOOKSDLL_API const std::vector<std::string>& get_all_reading_status();
 


