#include "TheSerializationClass.h"


void TheSerializationClass::deserialize_the_books(Str  path)
{
	MassoudBookSerialization::ToSerialize to_serialize;
	std::fstream input(path, std::ios::in | std::ios::binary);
	to_serialize.ParseFromIstream(&input);
	for (const auto& book : to_serialize.allbooks()) {
		Str name = book.name();
		int32_t page_number = book.pages();
		std::vector<std::string> tags;
		for (const auto& tag : book.tag())tags.push_back(tag);
		std::string catagory;
		switch (book.catagory()) {
		case MassoudBookSerialization::Book_Catagories_AnyCatagory: catagory = "Any"; break;
		case MassoudBookSerialization::Book_Catagories_Math: catagory = "Math"; break;
		case MassoudBookSerialization::Book_Catagories_GameDev: catagory = "GameDev"; break;
		case MassoudBookSerialization::Book_Catagories_CSharp: catagory = "CSharp"; break;
		case MassoudBookSerialization::Book_Catagories_Java: catagory = "Java"; break;
		case MassoudBookSerialization::Book_Catagories_Cs: catagory = "Cs"; break;
		case MassoudBookSerialization::Book_Catagories_Cpp: catagory = "Cpp"; break;
		case MassoudBookSerialization::Book_Catagories_Emmbedded: catagory = "Emmbedded"; break;
		case MassoudBookSerialization::Book_Catagories_PyAndMl: catagory = "PyAndMl"; break;
		case MassoudBookSerialization::Book_Catagories_Art: catagory = "Art"; break;
		case MassoudBookSerialization::Book_Catagories_Android: catagory = "Android"; break;
		default:catagory = "Any";
		}

		std::string reading_status;
		switch (book.readingstatus()) {
		case MassoudBookSerialization::Book_ReadingStatus_AnyReadingStatus: reading_status = "Any"; break;
		case MassoudBookSerialization::Book_ReadingStatus_Reading: reading_status = "Reading"; break;
		case MassoudBookSerialization::Book_ReadingStatus_WannaRead: reading_status = "WannaRead"; break;
		case MassoudBookSerialization::Book_ReadingStatus_WannaRead2: reading_status = "WannaRead2"; break;
		case MassoudBookSerialization::Book_ReadingStatus_YetToWannaRead: reading_status = "YetToWannaRead"; break;
		case MassoudBookSerialization::Book_ReadingStatus_DelayedReading: reading_status = "DelayedReading"; break;
		case MassoudBookSerialization::Book_ReadingStatus_Finished: reading_status = "Finished"; break;
		case MassoudBookSerialization::Book_ReadingStatus_Dropped: reading_status = "Dropped"; break;
		default: reading_status = "Any";
		}

		add_book(name, catagory, reading_status, &tags, page_number);

	}
	auto f = to_serialize.tags_size();
	if (to_serialize.tags_size() > 0) {
		for (const auto& tag : to_serialize.tags())add_tag(tag);

	}
}

