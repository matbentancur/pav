#ifndef A_H_INCLUDED
#define A_H_INCLUDED
#include <string>
#include"B.h"

using namespace std;

// Declaración forward de B
class ClassB;

class ClassA{
    private:
      string msg_a;
      ClassB * class_b;

    public:
      ClassA();// Constructor
      void SetA(string);
      string getA();
      ~ClassA();
};
#endif // A_H_INCLUDED
