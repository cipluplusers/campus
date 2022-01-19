#ifndef CLASSLEARNINGPROGRAM_H
#define CLASSLEARNINGPROGRAM_H


using namespace std;

class LearningProgram
{
public:
    
    unsigned long Id;
    LinkedList<string> Subject;

    string toString();
};

#endif
