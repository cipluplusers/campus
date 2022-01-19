#ifndef CLASSSTUDENT_H
#define CLASSSTUDENT_H

using namespace std;

class Student
{
public:
    
    string name;
    string surname;
    string secondName;
    Date dateOfBirth;
    Date courseStartDate;
    unsigned long id;
    unsigned long departmentId;
    unsigned long diaryId;
    unsigned long learningProgrammingId;

    string toString();

	friend std::ostream& operator<< (std::ostream& out, const Student& student);

};

#endif /* CLASSSTUDENT_H */
