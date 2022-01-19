#ifndef CLASSDATEBASE
#define CLASSDATEBASE

using namespace std;

class DateBase
{
private:
	Student students;
	Teacher teachers;
	Mark marks;
	LearningProgram learningPrograms;
	Department departments;
	Diary diaries;
	Subject subjects;

public:

	Student getStudent() 
	{ 
		return students; 
	}
	void setStudent(Student valueStudents)
	{ 
		students = valueStudents;
	}
	Teacher getTeacher()
	{
		return teachers; 
	}
	void setTeacher(Teacher valueTeachers)
	{
		teachers = valueTeachers;
	}
	Mark getMark()
	{
		return marks;
	}
	void setMark(Mark valueMarks)
	{
		marks = valueMarks;
	}
	LearningProgram getLearningProgram()
	{
		return learningPrograms;
	}
	void setLearningProgram(LearningProgram valueLearningPrograms)
	{
		learningPrograms = valueLearningPrograms;
	}
	Department getDepartment()
	{
		return departments;
	}
	void setDepartment(Department valueDepartments)
	{
		departments = valueDepartments;
	}
	Diary getDiary()
	{
		return diaries;
	}
	void setDiary(Diary valueDiaries)
	{
		diaries = valueDiaries;
	}
	Subject getSubject()
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

