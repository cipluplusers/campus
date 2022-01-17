#include <iostream>
#include "ClassDate.h"

using namespace std;

Date::Date(int valueDay, int valueMonth, int valueYear)
{
    day = valueDay;
    month = valueMonth;
    year = valueYear;
}

int main()
{
    Date birthday(6, 1, 2004);
    
    birthday.PrintDate();
}
