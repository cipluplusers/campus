#ifndef CLASSLEARNINGPROGRAM_H
#define CLASSLEARNINGPROGRAM_H
#include <string>
#include "LinkedList.h"


using namespace std;

class LearningProgram
{
public:
    string title;
    unsigned long id;
    LinkedList<string> subjects;

    //string toString();

<<<<<<< HEAD
	//friend std::ostream& operator<< (std::ostream& out, LearningProgram& lp);
=======
	friend std::ostream& operator<< (std::ostream& out, LearningProgram& lp);
>>>>>>> df188ce150d40f1d5f49bfa5958e80b27dc803fb

};

#endif
