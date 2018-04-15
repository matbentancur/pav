#include "C.h"

ClassC::ClassC(){
    this->msg_c = "Soy la clase C";
}

void ClassC::setC(string _c){
    this->msg_c = _c;
}

string ClassC::getC(){
    return this->msg_c;
}

ClassC::~ClassC(){};
