﻿#include "ClassMark.h"
#include <iostream>
#include <string>

string Mark::toString()
{
	string strId = to_string(id);
	string strSubjectId = to_string(subjectId);
	string strTeacherId = to_string(teacherId);
	string strValue = to_string(value);
	string allData = strId + " " + strSubjectId + " " + strTeacherId + " " + strValue;
	return allData;
}


std::ostream& operator<< (std::ostream& out, const Mark& mark)
{
	out << mark.toString() << endl;

	return out;
}
