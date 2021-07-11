count : bar_main.o bar.o
	g++ bar_main.o bar.o -o count
main.o : bar_main.cpp
	g++ -c bar_main.cpp -o bar_main.o
kpcnel.o : bar.cpp
	g++ -c bar.cpp -o bar.o
clean:
	rm *.o bar
