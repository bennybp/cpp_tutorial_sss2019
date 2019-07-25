#include "temperature.hpp"
#include <pybind11/pybind11.h>


PYBIND11_MODULE(sss_cpp, m)
{
    m.doc() = "Functions for temperature conversions implemented in C++";
    
    m.def("f_to_celsius", f_to_celsius,
          "Convert a temperature from F to C");

    m.def("count", count,
          "Count some numbers");
}
