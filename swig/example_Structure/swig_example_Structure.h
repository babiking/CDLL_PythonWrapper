//
// Created by SENSETIME\fengjing1 on 18-5-23.
//

#ifndef CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_STRUCTURE_H
#define CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_STRUCTURE_H

#include <vector>
#include <stdlib.h>
using namespace std;

struct arrayInt{

    const char* arrayID;
    vector<int>  array;

};

arrayInt* func_bubble_sort(arrayInt* pArrayInt);

arrayInt* wrap_create_ARRAYINT(const char* arrayID, vector<int> array);
vector<int> wrap_get_ARRAYINT_array(arrayInt* pArrayInt);
#endif //CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_STRUCTURE_H
