#ifndef CLASSMARK_H
#define CLASSMARK_H

using namespace std;


class Mark {
public:

	unsigned long id;
	unsigned long subjectId;
	unsigned long teacherId;
	int value;

	string toString();

	friend std::ostream& operator<< (std::ostream& out, const Mark& mark);

};


#endif
