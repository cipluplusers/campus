#ifndef CLASSDIARY_H
#define CLASSDIARY_H

using namespace std;

class Diary {
public:
    unsigned long id;
    unsigned long studentId;
    int marks;

    string toString();

	friend std::ostream& operator<< (std::ostream& out, const Diary& diary);
};

#endif /* CLASSDIARY_H */