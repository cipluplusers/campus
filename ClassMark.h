#ifndef CLASSMARK_H
#define CLASSMARK_H
#include <string>


using namespace std;


class Mark 
{
public:

	unsigned long id;
	unsigned long subjectId;
	unsigned long teacherId;
	unsigned long studentId;
	int value;

	string toString();
    string serialize();
    Mark deserialize(string str);
  
	friend ostream& operator<< (ostream& out, const Mark& mark);
};

#endif
