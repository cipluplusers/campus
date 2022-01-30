#ifndef CLASSDIARY_H
#define CLASSDIARY_H
#include <string>
#include "LinkedList.h"
#include "ClassMark.h"


class Diary
{
public:
    
    unsigned long id;
    unsigned long studentId;
    LinkedList<Mark> Marks;
    
    string toString();

	double getAverageMark();

	friend ostream& operator<< (ostream& out, Diary& diary);
};

#endif /* CLASSDIARY_H */
