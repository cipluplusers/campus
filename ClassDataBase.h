#ifndef CLASSDATABASE
#define CLASSDATABASE

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

	Student getStudents() 
	{ 
		return students; 
	}
	void setStudent(Student valueStudents)
	{ 
		students = valueStudents;
	}
	Teacher getTeachers()
	{
		return teachers; 
	}
	void setTeacher(Teacher valueTeachers)
	{
		teachers = valueTeachers;
	}
	Mark getMarks()
	{
		return marks;
	}
	void setMark(Mark valueMarks)
	{
		marks = valueMarks;
	}
	LearningProgram getLearningPrograms()
	{
		return learningPrograms;
	}
	void setLearningProgram(LearningProgram valueLearningPrograms)
	{
		learningPrograms = valueLearningPrograms;
	}
	Department getDepartments()
	{
		return departments;
	}
	void setDepartment(Department valueDepartments)
	{
		departments = valueDepartments;
	}
	Diary getDiaries()
	{
		return diaries;
	}
	void setDiary(Diary valueDiaries)
	{
		diaries = valueDiaries;
	}
	Subject getSubjects()
	{
		return subjects;
	}
	void setSubject(Subject valueSubjects)
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
	Mark addMark();
	void removeMark();
	LearningProgram addLearningProgram();
	void removeLearningProgram();
	Subject addSubject();
	void removeSubject();
};


#endif // !CLASSDATEBASE

