#ifndef CLASSTEACHER_H
#define CLASSTEACHER_H
#include "ClassDate.h"


using namespace std;


class Teacher
{
public:
    
    string name;
    string surname;
    string secondName;
    Date dateOfBirht;
    unsigned long id;
    unsigned long departmentId;
    unsigned long subjectId;

    string toString();
    string serialize();

	friend std::ostream& operator<< (std::ostream& out, Teacher& teacher);
};

#endif // CLASSTEACHER_H
