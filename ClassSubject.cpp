#include "ClassSubject.h"
#include <iostream>
#include <string>


using namespace std;


string Subject::toString()
{
  string strSubjectId = to_string(subjectId);
  string strSubjectCountOfCredits = to_string(subjectCountOfCredits);
  string allData = subjectCaption + " " + strSubjectId + " " + strSubjectCountOfCredits;
  return allData;
}

 
std::ostream& operator<< (std::ostream& out, Subject& subject)
{
	out << subject.toString() << endl;

	return out;
}


string Subject::serialize()
{
    return  "|SubjectCaption|" + subjectCaption +
            "|SubjectId|" + to_string( subjectId ) +
            "|SubjectCountOfCredits|" + to_string( subjectCountOfCredits ) + "|";
}

