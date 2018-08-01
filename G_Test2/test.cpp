#include "pch.h"
#include "Books.h"
#include <memory>
#include <Book.h>
#include <vector>
#include <string>
#include "TheSerializationClass.h"
#include "MassoudBooksSr.pb.h"

std::vector<BookNmSpc::Book> books;
std::vector<std::string> tags;
void add_book(std::string name, std::vector<std::string> tags, std::string catagory, std::string reading_status) {
	books.push_back(BookNmSpc::Book(name, tags, catagory, reading_status));
}
void add_tag(std::string tag) { tags.push_back(tag); };
std::string path = "D:\\MassoudBooks\\prsave.dat";
std::fstream sad("D:\\MassoudBooks\\prsave.dat", std::ios::in);

bool shitter(bool(*shitting)()) {
	 shitting();
	 return true;
}
bool shitting() {
	return true;
}

TEST(TestaddBks, AddBksTst) {
	
	TheSerializationClass sr;
	//sr.deserialize_the_books(path, add_book, add_tag);
	EXPECT_TRUE(shitter(nullptr));
}