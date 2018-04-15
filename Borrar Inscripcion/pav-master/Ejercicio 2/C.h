#ifndef C_H_INCLUDED
#define C_H_INCLUDED
#include <string>

using namespace std;

// Declaración forward de A y B
class ClassA;
class ClassB;

class ClassC{
   private:
        string msg_c;
        ClassA * class_a;
        ClassB * class_b;
   public:
        ClassC();
        void setC(string);
        string getC();
        ~ClassC();
};

#endif // C_H_INCLUDED

