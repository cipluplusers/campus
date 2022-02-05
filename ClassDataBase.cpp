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
#include "GlobalConstants.h"


void DataBase::addMark(Mark obj)
{
	getMarks().pushBack(obj);
}


void DataBase::removeMark(int position)
{
	getMarks().deleteFromPosition(position);
}


void DataBase::addLearningProgram(LearningProgram obj)
{
	getLearningPrograms().pushBack(obj);
}


void DataBase::removeLearningProgram(int position)
{
	getLearningPrograms().deleteFromPosition(position);
}


void DataBase::addSubject(Subject obj)
{
    getSubjects().pushBack(obj);
}


void DataBase::removeSubject(int position)
{
	getSubjects().deleteFromPosition(position);
}


void DataBase::addStudent(Student obj)
{
	getStudents().pushBack(obj);
}


void DataBase::removeStudent(int position)
{
	getStudents().deleteFromPosition(position);
}


void DataBase::addTeacher(Teacher obj)
{
	getTeachers().pushBack(obj);
}


void DataBase::removeTeacher(int position)
{
    getTeachers().deleteFromPosition(position);
}


void DataBase::addDiary(Diary obj)
{
    getDiaries().pushBack(obj);
}


void DataBase::removeDiary(int position)
{
    getDiaries().deleteFromPosition(position);
}


void DataBase::addDepartment(Department obj)
{
    getDepartments().pushBack(obj);
}


void DataBase::removeDepartment(int position)
{
    getDepartments().deleteFromPosition(position);
}


Diary DataBase::getDiaryByStudentId(unsigned long studentId)
{
    Node<Diary>* temp = getDiaries().head;
    
    while( temp != nullptr )
    {
        if ( temp->data.studentId == studentId )
        {
            return temp->data;
        }
        
        temp = temp->next;
    }
    
    return nullptr;
}


Diary DataBase::getDiaryById(unsigned long id)
{
    Node<Diary>* temp = getDiaries().head;
    
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
    Node<Subject>* temp = getSubjects().head;

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
    Node<Subject>* temp = getSubjects().head;

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
    Node<Subject>* temp = getSubjects().head;

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


void DataBase::loadSubject(string fileName)
{
    ifstream fin(fileName);
    string data;
    getline(fin, data);
    char delim = '|';
    Node<Subject>* head = getSubjects().head;
    while (getline(fin, data))
    {
        vector<string> arr;
        while (getline(fin, data, delim))
        {
            arr.push_back(data);
        }

        unsigned long countOfCredits, id;
        stringstream arr3(arr[3]);
        arr3 >> id;
        stringstream arr5(arr[5]);
        arr5 >> countOfCredits;

        head->data.subjectCaption = arr[1];
        head->data.subjectCountOfCredits = countOfCredits;
        head->data.subjectId = id;

        head = head->next;
    }
}



void DataBase::unloadSubject(string fileName)
{
    ofstream fout(fileName);
    Node<Subject>* head = getSubjects().head;
    while (head != nullptr)
    {
        string data = head->data.serialize();
        fout << data;
        head = head->next;
    }
    fout.close();
    return;
}

LinkedList<Mark> DataBase::getMarksBySubjectId(unsigned long subjectId)
{
	Node<Mark>* temp = getMarks().head;

	LinkedList<Mark> listMarks;

	while (temp != nullptr)
	{
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

	LinkedList<Mark> listMarks;

	while (temp != nullptr)
	{
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

	LinkedList<Mark> listMarks;

	while (temp != nullptr)
	{
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
        if (temp->data.id == id)
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


LearningProgram DataBase::getLearningProgramById(unsigned long id)
{
    Node<LearningProgram>* temp = getLearningPrograms().head;

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


LearningProgram DataBase::getLearningProgramByTitle(string title)
{
    Node<LearningProgram>* temp = getLearningPrograms().head;

    while (temp != nullptr)
    {
        if (temp->data.title == title)
        {
            return temp->data;
        }
        temp = temp->next;
    }
    return nullptr;
}


Department DataBase::getDepartmentByTitle(string title)
{
    Node<Department>* temp = getDepartments().head;

    while (temp != nullptr)
    {
        if (temp->data.title == title)
        {
            return temp->data;
        }
        temp = temp->next;
    }
    return nullptr;
}


Department DataBase::getDepartmentById(unsigned long id)
{
    Node<Department>* temp = getDepartments().head;

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


bool DataBase::loadDepartments()
{
    string str = "";
    ifstream fin;
    fin.open(pathDepartments);
    
    if ( !fin.is_open() )
    {
        return false;
    }
    else
    {
        string tempStr;
        while ( getline(fin, tempStr) )
        {
            str += tempStr;
        }
    }
    
    fin.close();
    
    Department tempDepartment;
    getDepartments().pushBack( tempDepartment.deserialize(str) );
    
    return true;
}


bool DataBase::unloadDepartments()
{
    ofstream fout;
    fout.open(pathDepartments);
    
    if ( !fout.is_open() )
    {
        return false;
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
    
    return true;
}


bool DataBase::loadStudents()
{
    string str = "";
    ifstream fin;
    fin.open(pathStudents);

    if (!fin.is_open())
    {
        return false;
    }

    else
    {
        string tempStr;
        while (getline(fin, tempStr))
        {
            str += tempStr;
        }
    }

    fin.close();

    Student tempStudent;
    getStudents().pushBack(tempStudent.deserialize(str));

    return true;

}


bool DataBase::unloadStudents()
{
    ofstream fout;
    fout.open(pathStudents);

    if (!fout.is_open())
    {
        return false;
    }

    else
    {
        string str = "";

        Node <Student>* temp = getStudents().head;

        while (temp != nullptr)
        {
            string tempStr = "";
            tempStr = temp->data.serialize();
            str += tempStr;
            temp = temp->next;
        }

        fout << str;     
    }

    fout.close();

    return true;
}
