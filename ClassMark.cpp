#include "ClassMark.h"
#include <iostream>
#include <string>


string Mark::toString()
{
	string strId = to_string(id);
	string strSubjectId = to_string(subjectId);
	string strTeacherId = to_string(teacherId);
	string strStudentId = to_string(studentId);
	string strValue = to_string(value);
	string allData = strId + " " + strSubjectId + " " + strTeacherId + " " + strStudentId + " " + strValue;
	return allData;
}


string Mark::serialize()
{
    return  "|ID|" + to_string( id ) +
            "|SubjectId|" + to_string( subjectId ) +
            "|TeacherId|" + to_string( teacherId ) +
            "|StudentId|" + to_string( studentId ) +
            "|Value|" + to_string( value ) + "|";
}


Mark Mark::deserialize(string str)
{
    string marks[10];
    
    for (int i = 0; i < 10; i++)
    {
        getline(cin, str, '|');
        marks[i] = str;
    }
    
    unsigned long id = stoul(marks[1], nullptr, 10);
    unsigned long subjectId = stoul(marks[3], nullptr, 10);
    unsigned long teacherId = stoul(marks[5], nullptr, 10);
    unsigned long studentId = stoul(marks[7], nullptr, 10);
    int value = stoi(marks[9]);
    
    Mark object = {id, subjectId, teacherId, studentId, value};
    
    return object;
}


std::ostream& operator<< (std::ostream& out, Mark& mark)
{
	out << mark.toString() << endl;

	return out;
}

