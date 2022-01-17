#ifndef CLASSDATE_H
#define CLASSDATE_H

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
    
    void PrintDate();
  
};

#endif /* ClassDate_h */
