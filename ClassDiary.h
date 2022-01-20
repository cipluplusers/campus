#ifndef CLASSDIARY_H
#define CLASSDIARY_H
#include <string>
#include "LinkedList.h"
<<<<<<< HEAD
#include "ClassMark.h"
=======
>>>>>>> df188ce150d40f1d5f49bfa5958e80b27dc803fb

using namespace std;

class Diary
{
public:
    
    unsigned long id;
    unsigned long studentId;
<<<<<<< HEAD
    LinkedList<Mark> Marks;
=======
    LinkedList<Marks> Marks;
>>>>>>> df188ce150d40f1d5f49bfa5958e80b27dc803fb

    string toString();

	friend ostream& operator<< (ostream& out, Diary& diary);

};

#endif /* CLASSDIARY_H */
