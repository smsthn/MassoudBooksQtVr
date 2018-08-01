#pragma once
#include <functional>
#include <string>
#include <vector>
#include "MassoudBooksSr.pb.h"
#include<fstream>


class TheSerializationClass
{
private:
	typedef std::string Str;
	typedef std::vector<Str> StrVctr;
public:
	TheSerializationClass(){}
	void deserialize_the_books(const Str& path, void (* add_book)(Str,StrVctr,Str,Str), std::function<void(std::string)>  add_tag);


};

