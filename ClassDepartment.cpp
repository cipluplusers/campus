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