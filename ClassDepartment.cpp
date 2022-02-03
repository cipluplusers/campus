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
    string departments[4];
    
    for (int i = 0; i < 4; i++)
    {
        getline(cin, str, '|');
        departments[i] = str;
    }
    
    unsigned long id = stoul(departments[3], nullptr, 10);
    
    Department object = {departments[1], id};
    
    return object;
}


std::ostream& operator<< (std::ostream& out, Department& department)
{
	out << department.toString() << endl;

	return out;
}

