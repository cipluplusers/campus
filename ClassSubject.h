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

	friend ostream& operator<< (ostream& out, Subject& subject);
};
#endif
