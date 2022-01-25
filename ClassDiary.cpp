#include "LinkedList.h"

#include "ClassDiary.h"
#include <iostream>
#include <string>


/*string Diary::toString()
{
	string strStudentId = to_string(studentId);
	string strId = to_string(id);
	string strMarks = to_string(Marks->head->data);
	string allData = strId + " " + strStudentId + " " + strMarks;
	return allData;
}

 
std::ostream& operator<< (std::ostream& out, Diary& diary)
{
	out << diary.toString() << endl;

	return out;
}
*/


string Diary::serialize()
{
    Node<Mark> *element = Marks.head;
    string tempStrSub = "|";
    
    for (int i = 0; i < Marks.listLength(); i++)
    {
        tempStrSub = tempStrSub + to_string( element->data.id ) + "|";
        element = element->next;
    }
    
    return  "|ID|" + to_string(id) +
            "|StudentId|" + to_string(studentId) + 
            "|Marks|" + "[" + tempStrSub + "]|";
}


