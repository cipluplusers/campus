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

void DataBase::addLearningProgram(LearningProgram lp)
{
  getLearningPrograms().pushBack(lp);
}

void DataBase::removeLearningProgram(unsigned long removeId)
{
  unsigned long position = removeId; 
  getLearningPrograms().deleteFromPosition(position);
}

void DataBase::addSubject(Subject element)
{
    getSubjects().pushBack(element);
}

void DataBase::removeSubject(int position)
{
    getSubjects().deleteFromPosition(position);
}

void DataBase::addLearningProgram(LearningProgram lp)
{
  getLearningPrograms().pushBack(lp);
}


void DataBase::removeLearningProgram(int position)
{
  getLearningPrograms().deleteFromPosition(position);
}


void DataBase::addSubject(Subject element)
{
    getSubjects().pushBack(element);
}


void DataBase::removeSubject(int position)
{
    getSubjects().deleteFromPosition(position);
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
    
    return nullptr;
}


Diary DataBase::getDiaryById(unsigned long id)
{
    Node<Diary> *temp = getDiaries().head;
    
    while( temp != nullptr )
    {
        if ( temp->data.id == id )
        {
            return temp->data;
        }
        
        temp = temp->next;
    }
    
    return nullptr;
}


Subject DataBase::getSubjectByCaption(string caption)
{
    Node<Subject>* element = getSubjects().head;

    while (element != nullptr)
    {
        if (element->data.subjectCaption == caption)
        {
            return element->data;
        }
        element = element->next;
    }
  
    return element->data;
}


Subject DataBase::getSubjectByCountOfCredits(unsigned long countOfCredits)
{
    Node<Subject>* element = getSubjects().head;

    while (element != nullptr)
    {
        if (element->data.subjectCountOfCredits == countOfCredits)
        {
            return element->data;
        }
        element = element->next;
    }

    return element->data;
}


Subject DataBase::getSubjectById(unsigned long id)
{
    Node<Subject>* element = getSubjects().head;

    while (element != nullptr)
    {
        if (element->data.subjectId == id)
        {
            return element->data;
        }
        element = element->next;
    }
  
    return element->data;
}

