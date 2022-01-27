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


std::ostream& operator<< (std::ostream& out, Mark& mark)
{
	out << mark.toString() << endl;

	return out;
}

