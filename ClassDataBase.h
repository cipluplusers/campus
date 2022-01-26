#ifndef CLASSDATABASE
#define CLASSDATABASE
#include "ClassDataBase.h"
#include "ClassDepartment.h"
#include "ClassDiary.h"
#include "ClassLP.h"
#include "ClassMark.h"
#include "ClassStudent.h"
#include "ClassSubject.h"
#include "ClassTeacher.h"
#include "LinkedList.h"


using namespace std;


class DataBase
{
private:
    
	LinkedList<Student> students;
	LinkedList<Teacher> teachers;
	LinkedList<Mark> marks;
	LinkedList<LearningProgram> learningPrograms;
	LinkedList<Department> departments;
	LinkedList<Diary> diaries;
	LinkedList<Subject> subjects;

public:

	LinkedList<Student> getStudents()
	{ 
		return students; 
	}
	void setStudent(LinkedList<Student> valueStudents)
	{ 
		students = valueStudents;
	}

    
	LinkedList<Teacher> getTeachers()
	{
		return teachers; 
	}
	void setTeacher(LinkedList<Teacher> valueTeachers)
	{
		teachers = valueTeachers;
	}
  
    
    LinkedList<Mark> getMarks()
	{
		return marks;
	}
	void setMark(LinkedList<Mark> valueMarks)
	{
		marks = valueMarks;
	}

    
	LinkedList<LearningProgram> getLearningPrograms()
	{
		return learningPrograms;
	}
	void setLearningProgram(LinkedList<LearningProgram> valueLearningPrograms)
	{
		learningPrograms = valueLearningPrograms;
	}

    
	LinkedList<Department> getDepartments()
	{
		return departments;
	}
	void setDepartment(LinkedList<Department> valueDepartments)
	{
		departments = valueDepartments;
	}
  
    
	LinkedList<Diary> getDiaries()
	{
		return diaries;
	}
	void setDiary(LinkedList<Diary> valueDiaries)
	{
		diaries = valueDiaries;
	}

    
	LinkedList<Subject> getSubjects()
	{
		return subjects;
	}
	void setSubject(LinkedList<Subject> valueSubjects)
	{
		subjects = valueSubjects;
	}


	void loadDataBase();
	void unloadDataBase();
    
	Student addStudent();
	void removeStudent();
    
	Teacher addTeacher();
	void removeTeacher();
    
	Diary addDiary();
	void removeDiary();
    
	Department addDepartment();
	void removeDepartment();
    
	void addMark(Mark obj);
	void removeMark(int position);
    
	void addLearningProgram(LearningProgram lp);
	void removeLearningProgram(unsigned long removeId);
    
	void addSubject(Subject element);
	void removeSubject(int position);
    
    Diary getDiaryByStudentId(unsigned long StudentId);
    Diary getDiaryById(unsigned long id);

	Subject getSubjectByCaption(string caption);
	Subject getSubjectById(unsigned long id);
	Subject getSubjectByCountOfCredits(unsigned long countOfCredits);

	Student getStudentByName(string name);
	Student getStudentById(unsigned long id);
	Student getStudentBySurname(string surname);

	LearningProgram getLearningProgramById(unsigned long id);
	LearningProgram getLearningProgramByTitle(string title);

	Department getDepartmentByTitle(string title);
	Department getDepartmentById(unsigned long id);

};


#endif // !CLASSDATEBASE

