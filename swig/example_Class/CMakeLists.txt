cmake_minimum_required(VERSION 3.5)
project(swig_example_Class)

set(CMAKE_CXX_STANDARD 11)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

include_directories(/usr/include/python3.4m)

find_package(PythonLibs)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_SWIG_FLAGS "")
set_source_files_properties(swig_example_Class.i PROPERTIES CPLUSPLUS ON)
set_source_files_properties(swig_example_Class.i PROPERTIES SWIG_FLAGS "-includeall")

swig_add_module(swig_example_Class python swig_example_Class.i swig_example_Class.cpp)
swig_link_libraries(swig_example_Class ${PYTHON_LIBRARIES})