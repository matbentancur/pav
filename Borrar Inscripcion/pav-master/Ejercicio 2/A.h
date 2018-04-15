#ifndef A_H_INCLUDED
#define A_H_INCLUDED
#include <string>

using namespace std;

// Declaración forward de B y C
class ClassB;
class ClassC;

class ClassA{
    private:
      string msg_a;
      ClassB * class_b;
      ClassC * class_c;

    public:
      ClassA();// Constructor
      void SetA(string);
      string getA();
      ~ClassA();
};
#endif // A_H_INCLUDED

