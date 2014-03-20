CFLAGS=-c -g -Wall 

SOURCES=$(shell ls *.cc)
OBJECTS=$(SOURCES:.cc=.o) 
HEADERS=$(shell ls *.hh)
MAINO=Main.o
EXE=Ex3

$(EXE): $(OBJECTS) $(MAINO) $(HEADERS)
	@echo "Building" $(EXE)
	g++ -g $(OBJECTS) $(MAINO)  -o $@ 
	@echo
	@echo "Build Succeed"

%.o: %.cc %.hh
	@echo "Compiling" $<"..."
	@g++ $(CFLAGS) $< -o $@

%.o: %.C
	@echo "Compiling" $<"..."
	@g++ $(CFLAGS) $< -o $@


clean:
	rm -f $(OBJECTS) $(MAINO)
	rm -f $(EXE)

test:
	@echo $(HEADERS)