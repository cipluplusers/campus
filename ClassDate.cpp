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


<<<<<<< HEAD
bool operator==(Date &d1, Date &d2)
{
    return ( d1.getDay() == d2.getDay() &&
            d1.getMonth() == d2.getMonth() &&
            d1.getYear() == d2.getYear() );
}


bool operator<(Date &d1, Date &d2)
{
    if ( d1.getYear() > d2.getYear() )
    {
        return false;
    }
    else if ( d1.getMonth() > d2.getMonth() )
    {
        return false;
    }
    else if ( d1.getDay() > d2.getDay() )
    {
        return false;
    }
    else if (d1 == d2)
    {
        return false;
    }
    
    return true;
}


bool operator>(Date &d1, Date &d2)
{
    if (d1 == d2) { return false; }
    
    return !(d1 < d2);
}
=======


>>>>>>> main
