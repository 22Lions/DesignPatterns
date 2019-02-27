GCC = g++
BIN = bin
SRC = src
INC = inc
OBJ = obj

OUTFILE = program

all: observer subject
	g++ -I$(INC) $(SRC)/main.cpp $(OBJ)/* -o $(BIN)/$(OUTFILE)

observer:
	g++ -c $(SRC)/observer.cpp -I$(INC) -o $(OBJ)/observer.o

subject:
	g++ -c $(SRC)/subject.cpp -I$(INC) -o $(OBJ)/subject.o

clean: 
	rm $(BIN)/*
	rm $(OBJ)/*