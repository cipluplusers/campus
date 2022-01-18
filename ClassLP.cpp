#include "ClassLP.h"
#include <iostream>
#include <string>

string LearningProgram::toString()
{
	string strId = to_string(Id);
	string strSubject = Subject;
	string allData = strSubject + " " + strId;
	return allData;
}