#ifndef CLASSLEARNINGPROGRAM_H
#define CLASSLEARNINGPROGRAM_H

using namespace std;

class LearningProgram
{
public:
    
    unsigned long Id;
    string Subject;

    string toString();

	friend std::ostream& operator<< (std::ostream& out, const LearningProgram& lp);

};

#endif
