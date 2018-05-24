%module swig_example_Structure

%include "std_vector.i"
%include "cstring.i"

namespace std {

    %template(vectorInt) vector<int>;

}

%{

    #include "swig_example_Structure.h"

    extern arrayInt* func_bubble_sort(arrayInt* pArrayInt);

    extern arrayInt* wrap_create_ARRAYINT(const char* arrayID, std::vector<int> array);
    extern std::vector<int> wrap_get_ARRAYINT_array(arrayInt* pArrayInt);

%}

struct arrayInt{

    const char* arrayID;
    std::vector<int>  array;

};

extern arrayInt* func_bubble_sort(arrayInt* pArrayInt);

extern arrayInt* wrap_create_ARRAYINT(const char* arrayID, std::vector<int> array);
extern std::vector<int> wrap_get_ARRAYINT_array(arrayInt* pArrayInt);
