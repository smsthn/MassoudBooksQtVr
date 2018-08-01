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
	TheSerializationClass(){}
	static void deserialize_the_books(const Str& path, void(*add_book)(Str,Str,Str,StrVctr,int32_t) , std::function<void(std::string)>  add_tag);


};

