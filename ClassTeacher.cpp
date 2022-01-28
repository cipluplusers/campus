#include <iostream>
#include <string>
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


std::ostream& operator<< (std::ostream& out, Teacher& teacher)
{
	out << teacher.toString() << endl;

	return out;
}
