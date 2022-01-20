#ifndef CLASSDATE_H
#define CLASSDATE_H
#include <string>

using namespace std;

class Date
{
private:
    
    int day;
    int month;
    int year;
    
public:
    
    Date(int valueDay, int valueMonth, int valueYear);
    
    int getDay() { return day; }
    void setDay(int valueDay) { day = valueDay; }
    
    int getMonth() { return month; }
    void setMonth(int valueMonth) { month = valueMonth; }

    int getYear() { return year; }
    void setYear(int valueYear) { year = valueYear; }
    
    void printDate();

    string getString();
  
	friend std::ostream& operator<< (std::ostream& out, const Date& date);

};

bool operator==(Date &d1, Date &d2);
bool operator<(Date &d1, Date &d2);
bool operator>(Date &d1, Date &d2);

#endif /* CCLASSDATE_H */
