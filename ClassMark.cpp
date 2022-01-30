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
    string arr[10];
    
    unsigned long id = stoul(arr[1], nullptr, 10);
    unsigned long subjectId = stoul(arr[3], nullptr, 10);
    unsigned long teacherId = stoul(arr[5], nullptr, 10);
    unsigned long studentId = stoul(arr[7], nullptr, 10);
    
    Mark object = {id, subjectId, teacherId, studentId, arr[9]};
    
    return object;
}


std::ostream& operator<< (std::ostream& out, Mark& mark)
{
	out << mark.toString() << endl;

	return out;
}

