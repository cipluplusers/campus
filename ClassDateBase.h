#ifndef CLASSDATEBASE
#define CLASSDATEBASE

using namespace std;

class DateBase
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


	void loadDateBase();
	void unloadDateBase();
	Student addStudent();
	Student delStudent();
	Teacher addTeacher();
	Teacher delTeacher();
	Diary addDiary();
	Diary delDiary();
	Department addDepartment();
	Department delDepartment();
	Mark addMark();
	Mark delMark();
	LearningProgram addLearningProgram();
	LearningProgram delLearningProgram();
	Subject addSubject();
	Subject delSubject();
};


#endif // !CLASSDATEBASE

