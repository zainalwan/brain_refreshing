CC = g++
OBJECT_FILES = main.o
BINARY_NAME = app
BINARY_DIRECTORY = ../bin

all: help

help:
	@echo "Usage: make <argument>"
	@echo ""
	@echo "List of available arguments:"
	@echo "    help                     Print this help message"
	@echo "    install                  Compile the executable into ../bin/app"
	@echo "    clean                    Clean the built object files"
	@echo "    uninstall                Delete the ../bin/app executable"

install: main.o
	mkdir -p ${BINARY_DIRECTORY}
	${CC} -o ${BINARY_DIRECTORY}/${BINARY_NAME} ${OBJECT_FILES}

main.o: main.cpp
	${CC} -c -o main.o main.cpp

clean:
	rm -f *.o

uninstall:
	rm -f ${BINARY_DIRECTORY}/${BINARY_NAME}
