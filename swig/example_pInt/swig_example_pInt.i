// !Created by babiking@sensetime to implement a typemap btween C: int* to Python: PyObject* list...

%module swig_example_pInt

%typemap(in) int*{

    if(PyList_Check($input)){

        int nElements = PyList_Size($input);
        $1 = (int*)malloc(nElements*sizeof(int));
        for(int i=0; i<nElements; i++){
            PyObject* py_obj = PyList_GetItem($input, i);
            if(PyInt_Check(py_obj))
                $1[i] = PyInt_AsLong(py_obj);
            else{
                PyErr_SetString(PyExc_TypeError, "Datatype of list element should be Integer");
                free($1);
                return NULL;
            }
        }

    } else{
        PyErr_SetString(PyExc_TypeError, "Not a List");
        return NULL;
    }

}

// $1 is a C local variable corresponding to the actual type specified in %typemap directive
    // clean up int* array we malloc'd before the function call
%typemap(freearg) int* {

    free((int*) $1);
}

%{
#include "swig_example_pInt.h"
extern int* bubble_sort(int* array, int nElements);
%}

extern int* bubble_sort(int* array, int nElements);