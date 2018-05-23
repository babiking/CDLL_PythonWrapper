// !Created by babiking@sensetime on May 23rd, 2018 to typemap PyObject* List and C++ Vector...

#include "swig_example_Vector.h"


long func_sum_vector(vector<int> array){

    int nElements  = array.size();

    long vectorSum = 0;

    for(int i=0; i<nElements; i++){

        vectorSum += array[i];

    }

    return vectorSum;

}


