import swig_example_Structure as sw_struct

class arrayStructure(object):

    def __init__(self, array, arrayID):
        self.m_array = array
        self.m_arrayID = arrayID

        self._create_arrayInt()

    def _create_arrayInt(self):
        self.m_arrayInt = sw_struct.wrap_create_ARRAYINT(self.m_arrayID, self.m_array)

    def sort(self):
        # sArrayInt = arrayStructure()
        self.m_arrayInt = sw_struct.func_bubble_sort(self.m_arrayInt)

    def get_array(self):
        array = sw_struct.wrap_get_ARRAYINT_array(self.m_arrayInt)

        return array
