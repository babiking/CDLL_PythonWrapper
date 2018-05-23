//
// Created by SENSETIME\fengjing1 on 18-5-23.
//

#ifndef CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_PINT_H
#define CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_PINT_H

#include <string.h>
#include <stdlib.h>

int* bubble_sort(int* array, int nElements);

int* wrap_create_arrayInt(int nElements);
void wrap_set_arrayInt(int* pArrayInt, int nElements, int element, int index);
int wrap_get_arrayInt(int* pArrayInt, int nElements, int index);

#endif //CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_PINT_H
