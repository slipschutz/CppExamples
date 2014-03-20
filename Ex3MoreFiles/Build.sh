#!/bin/bash

# This script builds example 3 
# It does the same thing as the make file
#
echo "Make object files"
## The -c flag for g++ will make object files, .o files 
##
g++ -c Student.cc -o Student.o 
g++ -c UnderGrad.cc -o UnderGrad.o
g++ -c GradStudent.cc -o GradStudent.o


##
## Here the real magic happens.  Linking
## Under the hod the linker (the program ld) is being called by g++
## 
echo "Linking Magic"
g++ Main.C Student.o UnderGrad.o GradStudent.o -o Ex3