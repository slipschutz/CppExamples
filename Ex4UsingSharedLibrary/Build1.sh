#!/bin/bash


#
#  This is an example of how to build your program with 
#  your shared library the "bad" way
#  It depends on the state of your LD_LIBRARY PATH VARIABLE
#

g++ Main.C -lStudent -L../StudentDynamicLibrary -o Ex4