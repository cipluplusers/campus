#include <iostream>
#include "ClassDate.h"

using namespace std;

Date::Date(int valueDay, int valueMonth, int valueYear)
{
    day = valueDay;
    month = valueMonth;
    year = valueYear;
}

void Date::PrintDate()
{
    cout << "Date: " << day << "/" << month << "/"  << year << endl;
}


