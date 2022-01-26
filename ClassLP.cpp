#include "ClassLP.h"
#include "LinkedList.h"
#include "ClassSubject.h"
#include <iostream>
#include <string>


/*string LearningProgram::toString()
{
	string strId = to_string(id);
	string strSubject = subjects->head->data;
	string allData = title + strSubject + " " + strId;
	return allData;
}


std::ostream& operator<< (std::ostream& out, LearningProgram& lp)
{
	out << lp.toString() << endl;

	return out;
}*/


string LearningProgram::serialize()
{
    Node<Subject> *element = subjects.head;
    string tempStrSub = "|";
    
    while (element != nullptr)
    {
        tempStrSub = tempStrSub + to_string( element->data.subjectId ) + "|";
        element = element->next;
    }
    
    return  "|Title|" + title +
            "|ID|" + to_string(id) +
            "|Subjects|" + "[" + tempStrSub + "]|";
}


