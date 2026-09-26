CC=g++
CFLAGS=-c -Wall

all: calculator_app

calculator_app: main.o libcalculator.a
	$(CC) main.o libcalculator.a -o calculator_app

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

libcalculator.a: calculator.o
	ar -rcs libcalculator.a calculator.o

calculator.o: calculator.cpp
	$(CC) $(CFLAGS) calculator.cpp

clean:
	rm -rf *.o *.a calculator_app
