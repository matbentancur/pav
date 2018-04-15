#ifndef C_H_INCLUDED
#define C_H_INCLUDED
#include <string>

using namespace std;

class ClassC{
   private:
        string msg_c;
   public:
        ClassC();
        void setC(string);
        string getC();
        ~ClassC();
};

#endif // C_H_INCLUDED
