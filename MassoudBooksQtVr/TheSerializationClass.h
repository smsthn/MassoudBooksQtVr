#pragma once
#include <functional>
#include <string>
#include <vector>
#include "MassoudBooksSr.pb.h"
#include<fstream>


class TheSerializationClass
{
private:
	typedef const std::string& Str;
	typedef std::vector<std::string>* StrVctr;
public:
	std::function<void(const std::string&)>  add_tag;
	std::function<void(Str, Str, Str, StrVctr,int32_t)> add_book;
	TheSerializationClass(){}


	void deserialize_the_books(Str path);


};

