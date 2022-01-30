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
    string arr[14];
    string arr1[3];
    for (int i = 0; i < 14; i++)
    {
        getline(cin, str, '|');
        arr[i] = str;
    }
    
    for (int j = 0; j < 3; j++)
    {
        getline(cin, arr[7], '.');
        arr1[j] = arr[7];
    }
    
    int day = stoi(arr1[0]);
    int month = stoi(arr1[1]);
    int year = stoi(arr1[2]);
    
    unsigned long id = stoul(arr[9], nullptr, 10);
    unsigned long departmentId = stoul(arr[11], nullptr, 10);
    unsigned long subjectId = stoul(arr[13], nullptr, 10);
    
    Teacher object = {arr[1], arr[3], arr[5], {day, month, year}, id, departmentId, subjectId};
    
    return object;
}


std::ostream& operator<< (std::ostream& out, Teacher& teacher)
{
	out << teacher.toString() << endl;

	return out;
}
