#ifndef CLASSDEPARTMENT_H
#define CLASSDEPARTMENT_H

using namespace std;

class Department
{
public:

	string caption;
	unsigned long id;

	string toString();

	friend std::ostream& operator<< (std::ostream& out, const Department& department);

};

#endif // CLASSDEPARTMENT_Hdfghjk
