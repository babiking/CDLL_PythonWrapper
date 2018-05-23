# !Created by babiking@sensetime on May 23rd, 2018 to Wrap C/C++ low-level accessor functions into high-level python interface
import swig_example_pInt as pInt

class arrayInt(object):

    def __init__(self, array):
        self.array = array
        self.nElements = len(array)

    def sort(self):

        sort_array = []

        pArrayInt = pInt.wrap_create_arrayInt(self.nElements)

        # !Create C-type int* i.e. an c_int array
        for indx in range(0, self.nElements):
            pInt.wrap_set_arrayInt(pArrayInt, self.nElements, self.array[indx], indx)

        # !Call C++ bubble_sort function
        pSortArrayInt = pInt.bubble_sort(pArrayInt, self.nElements)


        # !Return a PyList-type list
        for indx in range(0, self.nElements):
            sort_array.append(pInt.wrap_get_arrayInt(pSortArrayInt, self.nElements, indx))

        return sort_array