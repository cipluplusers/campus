#include "ClassSubject.h"
#include <iostream>
#include <string>


/*string Subject::toString()
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
}*/


string Subject::serialize()
{
    return  "|SubjectCaption|" + subjectCaption +
            "|SubjectId|" + to_string( subjectId ) +
            "|SubjectCountOfCredits|" + to_string( subjectCountOfCredits ) + "|";
}


Subject Subject::deserialize(string str)
{
    string subjects[6];
    
    for (int i = 0; i < 6; i++)
    {
        getline(cin, str, '|');
        subjects[i] = str;
    }
    
    unsigned long subjectId = stoul(subjects[3], nullptr, 10);
    unsigned long subjectCountOfCredits = stoul(subjects[5], nullptr, 10);
    
    Subject object = {subjects[1], subjectId, subjectCountOfCredits};
    
    return object;
}
