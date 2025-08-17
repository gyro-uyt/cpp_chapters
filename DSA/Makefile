# Compiler & Flags
CXX = g++
CXXFLAGS = -Iutils -Wall -std=c++17

# Path to utils file
UTILS_SRC = utils/utils.cpp

# Usage:
#   make run FILE=Babbar/05.cpp
#   make build FILE=Babbar/05.cpp

build:
	$(CXX) $(CXXFLAGS) $(FILE) $(UTILS_SRC) -o $(basename $(FILE))

run: build
	./$(basename $(FILE))

clean:
	find . -type f -perm -111 -delete
