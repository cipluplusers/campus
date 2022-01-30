#ifndef CLASSDEPARTMENT_H
#define CLASSDEPARTMENT_H
#include <string>


using namespace std;


class Department
{
public:

	string title;
	unsigned long id;

	string toString();
    string serialize();
    
	friend std::ostream& operator<< (std::ostream& out, Department& department);
};

#endif // CLASSDEPARTMENT_H
