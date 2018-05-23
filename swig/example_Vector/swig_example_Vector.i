%module swig_example_Vector

%include "std_vector.i"
namespace std{

    %template(vectorInt) vector<int>;
    // typedef vector<int> vectorInt;

}

%{
#include "swig_example_Vector.h"
extern long func_sum_vector(std::vector<int> array);
%}


extern long func_sum_vector(std::vector<int> array);
// %include "swig_example_Vector.h"