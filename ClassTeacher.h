#ifndef CLASSTEACHER_H
#define CLASSTEACHER_H
<<<<<<< HEAD
#include "ClassDate.h"
=======
>>>>>>> 473694388e1478050c29b899966e71c40fe365c8

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

	friend std::ostream& operator<< (std::ostream& out, const Teacher& teacher);

};

#endif // CLASSTEACHER_H
