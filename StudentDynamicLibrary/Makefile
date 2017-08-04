CFLAGS=-c -g -Wall 
CXX=g++


NAME=Student


temp2= $(addprefix lib,$(NAME))
LIBRARY= $(addsuffix .so,$(temp2))

SOURCES=$(shell ls ./*.cc)
OBJECTS=$(SOURCES:.cc=.o) 

#
# What does fPIC do???
# Makes it "Position Independent Code"
#
# Is that a Good thing?
#
# Probably
#

.PHONY: clean get put all test sclean

all: $(LIBRARY) 

$(LIBRARY) : $(OBJECTS) 
	@echo "Building Library"
	@$(CXX) -fPIC -shared -o $@ $^
	@echo "Build succeed"
%.o : %.cc
	@echo "Compiling" $< "..."
	@$(CXX) $(CFLAGS) -fPIC $< -o $@ 

test:
	@echo $(OBJECTS)
clean:
	-rm -f $(OBJECTS) $(LIBRARY)
