#include "ClassStudent.h"
#include "ClassDate.h"
#include <iostream>
#include <string>

string Student::toString()
{
	string strName = name;
	string strSurname = surname;
	string strSecondName = secondName;
	string strDateOfBirht = dateOfBirth.getString();
	string strCourseStartDate = courseStartDate.getString();
	string strId = to_string(id);
	string strDiaryId = to_string(diaryId);
	string strDepartmentId = to_string(departmentId);
	string strLearningProgrammingId = to_string(learningProgrammId);
	string allData = strName + " " + strSurname + " " + strSecondName + " " + strDateOfBirht + " " +
		strCourseStartDate + " " + strId + " " + strDepartmentId + " " + strDiaryId + " " + strLearningProgrammingId;
	return allData;
}


std::ostream& operator<< (std::ostream& out, Student& student)
{
	out << student.toString() << endl;

	return out;
}

