#include "ClassDepartment.h"
#include <iostream>
#include <string>

string Department::toString()
{
	string strCaption = caption;
	string strId = to_string(id);
	string allData = strCaption + " " + strId;
	return allData;
}

std::ostream& operator<< (std::ostream& out, const Department& department)
{
	out << department.toString() << endl;

	return out;
}