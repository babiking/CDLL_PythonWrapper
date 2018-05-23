//　!Created by babiking@sensetime on May 23rd, 2018
//      SWIG example for int* parameter i.e. define a typemap convert C: int* to Python: python object* list

#include "swig_example_pInt.h"

int* bubble_sort(int* array, int nElements){

    int swap_temp;

    int* sArray = (int*)malloc(sizeof(int)*nElements);

    memcpy(sArray, array, sizeof(int)*nElements);

    for(int i=0; i<nElements-1; i++)
        for(int j=0; j<nElements-1-i; j++){

            if(sArray[j]>sArray[j+1]){

                swap_temp = sArray[j];
                sArray[j] = sArray[j+1];
                sArray[j+1] = swap_temp;

            }

    }

    return sArray;


}


int* wrap_create_arrayInt(int nElements){

    int* pArrayInt = (int*)malloc(sizeof(int)*nElements);

    return pArrayInt;

}


void wrap_set_arrayInt(int* pArrayInt, int nElements, int element, int index){

    if(index <= nElements){

        pArrayInt[index] = element;

    } else{

        return;
    }

}



int wrap_get_arrayInt(int* pArrayInt, int nElements, int index){

    if(index <= nElements){

        return pArrayInt[index];

    } else{

        return 0;

    }

}