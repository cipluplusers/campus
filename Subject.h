#ifndef SUBJECTS_H
#define SUBJECTS_H

using namespace std;

class Subject
{
public:
	string subjectCaption;
	unsigned long subjectId;
	unsigned long  subjectCountOfCredits;

	string toString();

	friend std::ostream& operator<< (std::ostream& out, const Subject& subject);
};
#endif
