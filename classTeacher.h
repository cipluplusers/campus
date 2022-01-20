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

	friend std::ostream& operator<< (std::ostream& out, const Teacher& teacher);

};

#endif // CLASSTEACHER_H
