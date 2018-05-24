// !Created by babiking@sensetime on May 23rd, 2018 to Wrap C-Nested-Structure and PyObject* class

#include "swig_example_Structure.h"

arrayInt* func_bubble_sort(arrayInt* pArrayInt){

    vector<int> array(pArrayInt->array);

    int swap_temp;

    for(int i=0; i<array.size(); i++)
        for(int j=0; j<array.size()-1-i; j++){

            if(array[j]<array[j+1]){

                swap_temp = array[j];
                array[j] = array[j+1];
                array[j+1] = swap_temp;

            }

    }

    // arrayInt* pSortArrayInt = (arrayInt*)malloc(sizeof(struct arrayInt));
    arrayInt* pSortArrayInt = new arrayInt[1];
    // after memory free, pSortArrayInt = NULL;


    pSortArrayInt->array = array;
    pSortArrayInt->arrayID = pArrayInt->arrayID;

    return pSortArrayInt;

}




arrayInt* wrap_create_ARRAYINT(const char* arrayID, vector<int> array){

    // arrayInt* pArrayInt = (arrayInt*)malloc(sizeof(struct arrayInt));
    arrayInt* pArrayInt = new arrayInt[1];
    // after memory free, pArrayInt = NULL;

    pArrayInt->arrayID = arrayID;
    pArrayInt->array = array;

    return pArrayInt;

}


vector<int> wrap_get_ARRAYINT_array(arrayInt* pArrayInt){

    return pArrayInt->array;

}