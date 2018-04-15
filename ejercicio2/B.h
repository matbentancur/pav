#ifndef B_H_INCLUDED
#define B_H_INCLUDED
#include <string>

using namespace std;

// Declaración forward de A y C
class ClassA;
class ClassC;

class ClassB{
    private:
       string msg_b;
       ClassA * class_a;
       ClassC * class_c;

    public:
       ClassB();
       void setB(string);
       string getB();
       ~ClassB();
};

#endif // B_H_INCLUDED

