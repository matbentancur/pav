#ifndef B_H_INCLUDED
#define B_H_INCLUDED
#include <string>
#include"A.h"

using namespace std;

// Declaración forward de A
class ClassA;

class ClassB{
    private:
       string msg_b;
       ClassA * class_a;

    public:
       ClassB();
       void setB(string);
       string getB();
       ~ClassB();
};

#endif // B_H_INCLUDED
