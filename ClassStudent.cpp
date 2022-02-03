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


string Student::serialize()
{
    return  "|Name|" + name +
            "|Surname|" + surname +
            "|SecondName|" + secondName +
            "|DateOfBirth|" + dateOfBirth.getString() +
            "|CourseStartDate|" + courseStartDate.getString() +
            "|ID|" + to_string( id ) +
            "|DepartmentId|" + to_string( departmentId ) +
            "|DiaryId|" + to_string( diaryId ) +
            "|LearningProgrammId|" + to_string( learningProgrammId ) + "|";
}


std::ostream& operator<< (std::ostream& out, Student& student)
{
	out << student.toString() << endl;

	return out;
}


Student Student::deserialize(string str)
{
    string students[18];
    string helpArr1[3];
    string helpArr2[3];
    
    for (int i = 0; i < 18; i++)
    {
        getline(cin, str, '|');
        students[i] = str;
    }
    
    for (int j = 0; j < 3; j++)
    {
        getline(cin, students[7], '.');
        helpArr1[j] = students[7];
    }
    
    int dayDateOfBirth = stoi(helpArr1[0]);
    int monthDateOfBirth = stoi(helpArr1[1]);
    int yearDateOfBirth = stoi(helpArr1[2]);
    
    for (int l = 0; l < 3; l++)
    {
        getline(cin, students[9], '.');
        helpArr2[l] = students[9];
    }
    
    int dayCourseStartDate = stoi(helpArr2[0]);
    int monthCourseStartDate = stoi(helpArr2[1]);
    int yearCourseStartDate = stoi(helpArr2[2]);
    
    unsigned long id = stoul(students[11], nullptr, 10);
    unsigned long departmentId = stoul(students[13], nullptr, 10);
    unsigned long diaryId = stoul(students[15], nullptr, 10);
    unsigned long learningProgrammId = stoul(students[17], nullptr, 10);
    
    Student object = {students[1], students[3], students[5], {dayDateOfBirth, monthDateOfBirth, yearDateOfBirth}, {dayCourseStartDate, monthCourseStartDate, yearCourseStartDate}, id, departmentId, diaryId, learningProgrammId};
    
    return object;
}
