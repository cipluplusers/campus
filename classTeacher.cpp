#include <iostream>
#include <string>
#include <cstdlib>
#include "ClassTeacher.h"
#include "ClassDate.h"


string Teacher::toString()
{
	string strName = name;
	string strSurname = surname;
	string strSecondName = secondName;
	string strDateOfBirht = dateOfBirht.getString();
	string strId = to_string(id);
	string strDepartmentId = to_string(departmentId);
	string strSubjectId = to_string(subjectId);
	string allData = strName + " " + strSurname + " " + strSecondName + " " + strDateOfBirht + " " +
		strId + " " + strDepartmentId + " " + strSubjectId;
	return allData;
}


string Teacher::serialize()
{
    return  "|Name|" + name +
            "|Surname|" + surname +
            "|SecondName|" + secondName +
            "|dateOfBirht|" + dateOfBirht.getString() +
            "|ID|" + to_string( id ) +
            "|DepartmentId|" + to_string( departmentId ) +
            "|SubjectId|" + to_string( subjectId ) + "|";
}


Teacher Teacher::deserialize(string str)
{
    string teachers[14];
    string helpArr1[3];
    for (int i = 0; i < 14; i++)
    {
        getline(cin, str, '|');
        teachers[i] = str;
    }
    
    for (int j = 0; j < 3; j++)
    {
        getline(cin, teachers[7], '.');
        helpArr1[j] = teachers[7];
    }
    
    int day = stoi(helpArr1[0]);
    int month = stoi(helpArr1[1]);
    int year = stoi(helpArr1[2]);
    
    unsigned long id = stoul(teachers[9], nullptr, 10);
    unsigned long departmentId = stoul(teachers[11], nullptr, 10);
    unsigned long subjectId = stoul(teachers[13], nullptr, 10);
    
    Teacher object = {teachers[1], teachers[3], teachers[5], {day, month, year}, id, departmentId, subjectId};
    
    return object;
}


std::ostream& operator<< (std::ostream& out, Teacher& teacher)
{
	out << teacher.toString() << endl;

	return out;
}
