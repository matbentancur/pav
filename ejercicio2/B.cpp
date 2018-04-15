#include "B.h"

ClassB::ClassB(){
    this->msg_b = "Soy la clase B";
}

void ClassB::setB(string _b){
    this->msg_b = _b;
}

string ClassB::getB(){
    return this->msg_b;
}
ClassB::~ClassB(){};
