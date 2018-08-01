#pragma once

#ifdef BOOKSDLL_EXPORTS  
#define BOOKSDLL_API __declspec(dllexport)   
#else  
#define BOOKSDLL_API __declspec(dllimport)   
#endif  

#include <string>
#include <vector>
namespace BookNmSpc {

	 struct Book {


		std::string m_name;
		std::vector<std::string> m_tags;
		int32_t m_page_number;
		std::string m_catagory;
		std::string m_reading_status;
		Book(std::string name, std::vector<std::string> tags, std::string catagory, std::string reading_status):m_name(name),m_tags(tags),m_catagory(catagory),m_reading_status(reading_status) {}
	};
}

