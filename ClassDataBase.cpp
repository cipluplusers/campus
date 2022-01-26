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
#include <fstream>


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
  
    return nullptr;
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

    return nullptr;
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
  
    return nullptr;
}


string DataBase::loadDepartments()
{
    string path = "Departments.txt";
    string str = "";
    ifstream fin;
    
    fin.open(path);
    
    if ( !fin.is_open() )
    {
        cout << "File wasn't open" << endl;
    }
    else
    {
        string temp;
        while ( getline(fin, temp) )
        {
            str += temp;
        }
    }
    
    fin.close();
    
    return str;
}


void DataBase::unloadDepartments()
{
    string path = "Departments.txt";
    ofstream fout;
    
    fout.open(path);
    
    if ( !fout.is_open() )
    {
        cout << "File wasn't open" << endl;
    }
    else
    {
        string str = "";
        
        Node<Department> *temp = getDepartments().head;
        while ( temp != nullptr )
        {
            string tempStr = "";
            tempStr = temp->data.serialize();
            str += tempStr;
            temp = temp->next;
        }
        fout << str;
    }
    
    fout.close();
}
