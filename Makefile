lab2:main.o dataIn.o
	g++ main.o dataIn.o -o lab2
main.o:main.cpp
	g++ -c main.cpp
dataIn.o:dataIn.cpp
	g++ -c dataIn.cpp

clean:
	rm *.o lab2
