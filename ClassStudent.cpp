#include "ClassStudent.h"
#include "ClassDate.h"
#include <iostream>
#include <string>

string Student::toString()
{
	string strName = name;
	string strSurname = surname;
	string strSecondName = secondName;
	string strDateOfBirht = to_string(dateOfBirht);
	string strCourseStartDate = to_string(courseStartDate);
	string strId = to_string(id);
	string strDiaryId = to_string(diaryId);
	string strDepartmentId = to_string(departmentId);
	string strLearningProgrammingId = to_string(learningProgrammingId);
	string allData = strName + " " + strSurname + " " + strSecondName + " " + strDateOfBirht + " " +
		strCourseStartDate + " " + strId + " " + strDepartmentId + " " + strDiaryId + " " + strLearningProgrammingId;
	return allData;
}