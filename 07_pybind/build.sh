#!/bin/bash


g++ -fPIC --shared -std=c++11 -Wall -Wextra -pedantic *cpp \
    -I${CONDA_PREFIX}/include \
    -I${CONDA_PREFIX}/include/python3.7m \
    -I${CONDA_PREFIX}/include/eigen3 \
    -L${CONDA_PREFIX}/lib/python3.7m -lpython3.7m \
    -o sss_cpp.so
