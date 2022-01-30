#ifndef SUBJECTS_H
#define SUBJECTS_H
#include <string>


using namespace std;


class Subject
{
public:
    
	string subjectCaption;
	unsigned long subjectId;
	unsigned long  subjectCountOfCredits;

	string toString();
    string serialize();
    Subject deserialize(string str);

	friend ostream& operator<< (ostream& out, Subject& subject);
};
#endif
