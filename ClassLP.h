#ifndef CLASSLEARNINGPROGRAM_H
#define CLASSLEARNINGPROGRAM_H

using namespace std;

class LearningProgram
{
public:
    
    unsigned long id;
    LinkedList<string> Subject;

    string toString();
};

#endif
