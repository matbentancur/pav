#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;

int main(){

    ClassA msg_a;
    msg_a = ClassA();

    ClassB msg_b;
    msg_b = ClassB();

    ClassC msg_c;
    msg_c = ClassC();

    cout<<"Estoy mostrando: "<<msg_a.getA()<<endl;
    cout<<"Estoy mostrando: "<<msg_b.getB()<<endl;
    cout<<"Estoy mostrando: "<<msg_c.getC()<<endl;

    return 0;
}
