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
    Node<Subject> *temp = getSubjects().head;

    while (temp != nullptr)
    {
        if (temp->data.subjectCaption == caption)
        {
            return temp->data;
        }
		temp = temp->next;
    }

    return nullptr;
}


Subject DataBase::getSubjectByCountOfCredits(unsigned long countOfCredits)
{
    Node<Subject> *temp = getSubjects().head;

    while (temp != nullptr)
    {
        if (temp->data.subjectCountOfCredits == countOfCredits)
        {
            return temp->data;
        }
		temp = temp->next;
    }

    return nullptr;
}


Subject DataBase::getSubjectById(unsigned long id)
{
    Node<Subject> *temp = getSubjects().head;

    while (temp != nullptr)
    {
        if (temp->data.subjectId == id)
        {
            return temp->data;
        }
		temp = temp->next;
    }

    return nullptr;
}


LinkedList<Mark> DataBase::getMarksBySubjectId(unsigned long subjectId)
{
	Node<Mark>* temp = getMarks().head;

	while (temp != nullptr)
	{
		LinkedList<Mark> listMarks;

		if (temp->data.subjectId == subjectId)
		{
			listMarks.pushBack(temp->data);
		}
		temp = temp->next;
	}

	return listMarks;
}


LinkedList<Mark> DataBase::getMarksByTeacherId(unsigned long teacherId)
{
	Node<Mark>* temp = getMarks().head;

	while (temp != nullptr)
	{
		LinkedList<Mark> listMarks;

		if (temp->data.teacherId == teacherId)
		{
			listMarks.pushBack(temp->data);
		}
		temp = temp->next;
	}

	return listMarks;
}


LinkedList<Mark> DataBase::getMarksByStudentId(unsigned long studentId)
{
	Node<Mark>* temp = getMarks().head;

	while (temp != nullptr)
	{
		LinkedList<Mark> listMarks;

		if (temp->data.studentId == studentId)
		{
			listMarks.pushBack(temp->data);
		}
		temp = temp->next;
	}

	return listMarks;
}


Mark DataBase::getMarkById(unsigned long id)
{
	Node<Mark>* temp = getMarks().head;

	while (temp != nullptr)
	{
		if (temp->data.id == id)
		{
			return temp->data;
		}
		temp = temp->next;
	}

	return nullptr;
}


Student DataBase::getStudentById(unsigned long id)
{
    Node<Student>* temp = getStudents().head;

    while (temp != nullptr)
    {
        if (temp->data.studentId == id)
        {
            return temp->data;
        }
        temp = temp->next;
    }

    return nullptr;
}


Student DataBase::getStudentByName(string name)
{
    Node<Student>* temp = getStudents().head;

    while (temp != nullptr)
    {
        if (temp->data.name == name)
        {
            return temp->data;
        }
        temp = temp->next;
    }

    return nullptr;
}


Student DataBase::getStudentBySurname(string surname)
{
    Node<Student>* temp = getStudents().head;

    while (temp != nullptr)
    {
        if (temp->data.surname == surname)
        {
            return temp->data;
        }
        temp = temp->next;
    }

    return nullptr;
}