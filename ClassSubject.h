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
<<<<<<< HEAD
    string serialize();
=======
  string serialize();
>>>>>>> fd342579b1d5e30661d39a3c53e947001dac400d

	friend ostream& operator<< (ostream& out, Subject& subject);
};
#endif
