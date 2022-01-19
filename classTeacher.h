#ifndef CLASSTEACHER_H
#define CLASSTEACHER_H

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
};

#endif // CLASSTEACHER_H
