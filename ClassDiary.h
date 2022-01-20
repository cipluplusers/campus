#ifndef CLASSDIARY_H
#define CLASSDIARY_H
#include <string>
#include "LinkedList.h"

using namespace std;

class Diary
{
public:
    
    unsigned long id;
    unsigned long studentId;
    LinkedList<int> Marks;

    string toString();

	friend ostream& operator<< (ostream& out, Diary& diary);
};

#endif /* CLASSDIARY_H */
