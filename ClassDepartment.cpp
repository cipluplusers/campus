#include "ClassDepartment.h"
#include <iostream>
#include <string>

string Department::toString()
{
	string strId = to_string(id);
	string allData = title + " " + strId;
	return allData;
}

std::ostream& operator<< (std::ostream& out, Department& department)
{
	out << department.toString() << endl;

	return out;
}
