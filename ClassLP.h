#ifndef CLASSLEARNINGPROGRAM_H
#define CLASSLEARNINGPROGRAM_H
#include <string>
#include "LinkedList.h"
#include "ClassSubject.h"


using namespace std;


class LearningProgram
{
public:
    
    string title;
    unsigned long id;
    LinkedList<Subject> subjects;

    //string toString();
	//friend std::ostream& operator<< (std::ostream& out, LearningProgram& lp);
};

#endif
