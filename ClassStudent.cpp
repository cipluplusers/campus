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
    string arr[18];
    string arr1[3];
    string arr2[3];
    
    for (int i = 0; i < 18; i++)
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
    
    for (int l = 0; l < 3; l++)
    {
        getline(cin, arr[9], '.');
        arr2[l] = arr[9];
    }
    
    int day = stoi(arr2[0]);
    int month = stoi(arr2[1]);
    int year = stoi(arr2[2]);
    
    unsigned long id = stoul(arr[11], nullptr, 10);
    unsigned long departmentId = stoul(arr[13], nullptr, 10);
    unsigned long diaryId = stoul(arr[15], nullptr, 10);
    unsigned long learningProgrammId = stoul(arr[17], nullptr, 10);
    
    Subject object = {arr[1], arr[3], arr[5], {day, month, year}, {day, month, year}, id, departmentId, diaryId, learningProgrammId};
    
    return object;
}
