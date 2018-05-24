cmake_minimum_required(VERSION 3.5)
project(swig_example_Structure)

set(CMAKE_CXX_STANDARD 11)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

include_directories(/usr/include/python3.4m)

find_package(PythonLibs)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_SWIG_FLAGS "")
set_source_files_properties(swig_example_Structure.i PROPERTIES CPLUSPLUS ON)
set_source_files_properties(swig_example_Structure.i PROPERTIES SWIG_FLAGS "-includeall")

swig_add_module(swig_example_Structure python swig_example_Structure.i swig_example_Structure.cpp)
swig_link_libraries(swig_example_Structure ${PYTHON_LIBRARIES})

add_executable(swig_example_Structure main.cpp swig_example_Structure.cpp swig_example_Structure.h)