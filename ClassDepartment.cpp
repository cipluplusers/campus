#include "ClassDepartment.h"
#include <iostream>
#include <string>


string Department::toString()
{
	string strId = to_string(id);
	string allData = title + " " + strId;
	return allData;
}


string Department::serialize()
{
    return "|Title|" + title + "|ID|" + to_string( id ) + "|";
}


Department Department::deserialize(string str)
{
    string arr[4];
    
    unsigned long id = stoul(arr[3], nullptr, 10);
    
    Department object = {arr[1], id};
    
    return object;
}


std::ostream& operator<< (std::ostream& out, Department& department)
{
	out << department.toString() << endl;

	return out;
}

