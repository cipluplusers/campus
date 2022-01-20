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


std::ostream& operator<< (std::ostream& out, Teacher& teacher)
{
	out << teacher.toString() << endl;

	return out;
}
