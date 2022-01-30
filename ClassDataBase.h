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
    
	void addStudent(Student obj);
	void removeStudent(int position);

	void addTeacher(Teacher obj);
	void removeTeacher(int position);

	void addDiary(Diary obj);
	void removeDiary(int position);

	void addDepartment(Department obj);
	void removeDepartment(int position);

	void addMark(Mark obj);
	void removeMark(int position);

	void addLearningProgram(LearningProgram obj);
	void removeLearningProgram(int position);

	void addSubject(Subject obj);
	void removeSubject(int position);
    
        Diary getDiaryByStudentId(unsigned long StudentId);
        Diary getDiaryById(unsigned long id);

	Subject getSubjectByCaption(string caption);
	Subject getSubjectById(unsigned long id);
	Subject getSubjectByCountOfCredits(unsigned long countOfCredits);

	LinkedList<Mark> getMarksBySubjectId(unsigned long subjectId);
	LinkedList<Mark> getMarksByTeacherId(unsigned long teacherId);
	LinkedList<Mark> getMarksByStudentId(unsigned long studentId);
	Mark getMarkById(unsigned long id);

	Student getStudentByName(string name);
	Student getStudentById(unsigned long id);
	Student getStudentBySurname(string surname);

	LearningProgram getLearningProgramById(unsigned long id);
	LearningProgram getLearningProgramByTitle(string title);

	Department getDepartmentByTitle(string title);
	Department getDepartmentById(unsigned long id);
};

#endif // !CLASSDATEBASE
