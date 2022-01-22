#include "ClassDataBase.h"
#include "ClassDepartment.h"
#include "ClassDiary.h"
#include "ClassLP.h"
#include "ClassMark.h"
#include "ClassStudent.h"
#include "ClassSubject.h"
#include "ClassTeacher.h"
#include "LinkedList.h"
#include <iostream>
#include <string>


void DataBase::addMark(Mark obj)
{
    getMarks().pushBack(obj);
}


void DataBase::removeMark(int position)
{
    getMarks().deleteFromPosition(position);
}


Diary DataBase::getDiaryByStudentId(unsigned long StudentId)
{
    Node<Diary> *temp = getDiaries().head;
    
    while( temp != nullptr )
    {
        if ( temp->data.studentId == StudentId )
        {
            return temp->data;
        }
        
        temp = temp->next;
    }
    
    return temp->data;
}
