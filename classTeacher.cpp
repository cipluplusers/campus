#include <iostream>
#include <string>
#include "classTeacher.h"

using namespace std;

int main()
{
	Teacher Minar;
	Minar.name = "Oleksandr";
	Minar.surname = "Minarchenko";
	cout << "Teacher - " << Minar.name << " " << Minar.surname << endl;
}