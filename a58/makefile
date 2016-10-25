STRINGS = strings0.o strings1.o strings2.o copyconstr.o moveconstr.o operator=.o swap.o addstring1.o addstring2.o size.o capacity.o at1.o at2.o resize.o reserve.o destructor.o rawpointers.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: strings/%.cc strings/strings.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(STRINGS) main.h
	g++ -std=c++11 -Wall -lstdc++ -o main main.cc $(STRINGS) main.h
