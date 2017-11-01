
all: 1Example 1NonExample 2Example 2NonExample 3Example 3NonExample 4Example 4NonExample 8Example 8NonExample



1Example: 1/src/1Example.cpp
	g++ 1/src/1Example.cpp -o $(shell pwd)/bin/1Example
	g++ 1/src/1Example.cpp -o $(shell pwd)/assembly/1ExampleAssembly -s

1NonExample: 1/src/1NonExample.cpp
	g++ 1/src/1NonExample.cpp -o $(shell pwd)/bin/1NonExample
	g++ 1/src/1NonExample.cpp -o $(shell pwd)/assembly/1NonExampleAssembly -s

2Example: 2/src/2Example.cpp
	g++ 2/src/2Example.cpp -o $(shell pwd)/bin/2Example
	g++ 2/src/2Example.cpp -o $(shell pwd)/assembly/2ExampleAssembly -s

2NonExample: 2/src/2NonExample.cpp
	g++ 2/src/2NonExample.cpp -o $(shell pwd)/bin/2NonExample
	g++ 2/src/2NonExample.cpp -o $(shell pwd)/assembly/2NonExampleAssembly -s

3Example: 3/src/3Example.cpp
	g++ 3/src/3Example.cpp -o $(shell pwd)/bin/3Example
	g++ 3/src/3Example.cpp -o $(shell pwd)/assembly/3ExampleAssembly -s

3NonExample: 3/src/3NonExample.cpp
	g++ 3/src/3NonExample.cpp -o $(shell pwd)/bin/3NonExample
	g++ 3/src/3NonExample.cpp -o $(shell pwd)/assembly/3NonExampleAssembly -s

4Example: 4/src/4Example.cpp
	g++ 4/src/4Example.cpp -o $(shell pwd)/bin/4Example
	g++ 4/src/4Example.cpp -o $(shell pwd)/assembly/4ExampleAssembly -s

4NonExample: 4/src/4NonExample.cpp
	g++ 4/src/4NonExample.cpp -o $(shell pwd)/bin/4NonExample
	g++ 4/src/4NonExample.cpp -o $(shell pwd)/assembly/4NonExampleAssembly -s

8Example: 8/src/8Example.cpp
	g++ 8/src/8Example.cpp -o $(shell pwd)/bin/8Example
	g++ 8/src/8Example.cpp -o $(shell pwd)/assembly/8ExampleAssembly -s

8NonExample: 8/src/8NonExample.cpp
	g++ 8/src/8NonExample.cpp -o $(shell pwd)/bin/8NonExample
	g++ 8/src/8NonExample.cpp -o $(shell pwd)/assembly/8NonExampleAssembly -s

$(shell mkdir -p $(shell pwd)/bin)
$(shell mkdir -p $(shell pwd)/assembly)