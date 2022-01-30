#include <iostream>
#include <string>
#include "ClassDate.h"


using namespace std;


Date::Date(int valueDay, int valueMonth, int valueYear)
{
    day = valueDay;
    month = valueMonth;
    year = valueYear;
}


void Date::printDate()
{
    cout << "Date: " << day << "/" << month << "/"  << year << endl;
}


string Date::getString()
{
    string sday = to_string(day);
    string smonth = to_string(month);
    string syear = to_string(year);
    string str = sday + "." + smonth + "." + syear;
        return str;
}


string Date::serialize()
{
    return "|Day|" + to_string( getDay() ) +
           "|Month|" + to_string( getMonth() ) +
           "|Year|" + to_string( getYear() ) + "|";
}


Date Date::deserialize(string str)
{
    string arr[6];
    
    for (int i = 0; i < 6; i++)
    {
        getline(cin, str, '|');
        arr[i] = str;
    }
    
    int day = stoi(arr[1]);
    int month = stoi(arr[3]);
    int year = stoi(arr[5]);
    
    
    Date object = {day, month, year};
    
    return object;
}



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


ostream& operator<< (ostream& out, Date& date)
{
	out << date.getString() << endl;
	return out;
}

