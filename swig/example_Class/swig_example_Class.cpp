// !Created by babiking@sensetime on May 24th, 2018 to Wrap C-Class to PyObject* class

#include "swig_example_Class.h"

// access to private members
void myComplex::set_dataID(const char *id) {dataID=id;}
const char* myComplex::get_dataID() { return dataID;}

// reload the C++ operators
myComplex myComplex::operator+(const myComplex &other) {

    myComplex new_Complex;

    new_Complex.Re = this->Re + other.Re;
    new_Complex.Im = this->Im + other.Im;

    return new_Complex;

}

