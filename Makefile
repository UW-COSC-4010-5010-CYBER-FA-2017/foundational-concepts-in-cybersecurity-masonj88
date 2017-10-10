
all: 1Example 1NonExample 2Example 2NonExample 3Example 3NonExample 4Example 4NonExample 8Example 8NonExample



1Example: 1/src/1Example.cpp
	g++ 1/src/1Example.cpp -o $(shell pwd)/bin/1Example

1NonExample: 1/src/1NonExample.cpp
	g++ 1/src/1NonExample.cpp -o $(shell pwd)/bin/1NonExample

2Example: 2/src/2Example.cpp
	g++ 2/src/2Example.cpp -o $(shell pwd)/bin/2Example

2NonExample: 2/src/2NonExample.cpp
	g++ 2/src/2NonExample.cpp -o $(shell pwd)/bin/2NonExample

3Example: 3/src/3Example.cpp
	g++ 3/src/3Example.cpp -o $(shell pwd)/bin/3Example

3NonExample: 3/src/3NonExample.cpp
	g++ 3/src/3NonExample.cpp -o $(shell pwd)/bin/3NonExample

4Example: 4/src/4Example.cpp
	g++ 4/src/4Example.cpp -o $(shell pwd)/bin/4Example

4NonExample: 4/src/4NonExample.cpp
	g++ 4/src/4NonExample.cpp -o $(shell pwd)/bin/4NonExample

8Example: 8/src/8Example.cpp
	g++ 8/src/8Example.cpp -o $(shell pwd)/bin/8Example

8NonExample: 8/src/8NonExample.cpp
	g++ 8/src/8NonExample.cpp -o $(shell pwd)/bin/8NonExample

$(shell mkdir -p $(shell pwd)/bin)