#include"A.h"

ClassA::ClassA(){ //Constructor
    this->msg_a = "Soy la clase A";
}
void ClassA::SetA(string _a){
    this->msg_a = _a;
}
string ClassA::getA(){
    return this->msg_a;
}
ClassA::~ClassA(){};
