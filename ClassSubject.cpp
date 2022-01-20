#include "ClassSubject.h"
#include <iostream>
#include <string>

string Subject::toString()
{
	string strSubjectCaption = subjectCaption;
	string strSubjectId = subjectId;
	string strSubjectCountOfCredits = subjectCountOfCredits;
	string allData = strSubjectCaption + " " + strSubjectId + " " + strSubjectCountOfCredits;
	return allData;
}

std::ostream& operator<< (std::ostream& out, Subject& subject)
{
	out << subject.toString() << endl;

	return out;
}
