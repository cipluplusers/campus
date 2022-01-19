#include "ClassDiary.h"
#include <iostream>
#include <string>

string Diary::toString()
{
	string strStudentId = to_string(studentId);
	string strId = to_string(id);
	string strMarks = to_string(marks);
	string allData = strId + " " + strStudentId + " " + strMarks;
	return allData;
}
