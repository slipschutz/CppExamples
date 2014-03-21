#!/bin/bash


#
#  This is an example of how to build your program with 
#  your shared library the "GOOD" way
#  Now it DOES NOT depend on the state of your LD_LIBRARY PATH VARIABLE
#

g++ Main.C -lStudent -L../StudentDynamicLibrary -Wl,-rpath,'$ORIGIN/../StudentDynamicLibrary' -o Ex4