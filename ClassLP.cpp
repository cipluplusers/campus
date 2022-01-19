#include "ClassLP.h"
#include "LinkedList.h"
#include <iostream>
#include <string>


string LearningProgram::toString()
{
	string strId = to_string(Id);
	string strSubject = Subject.head.data;
	string allData = strSubject + " " + strId;
	return allData;
}

std::ostream& operator<< (std::ostream& out, const LearningProgram& lp)
{
	out << lp.toString() << endl;

	return out;
}