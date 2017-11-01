
all: 1Example 1NonExample 2Example 2NonExample 3Example 3NonExample 4Example 4NonExample 5Example 5NonExample 6Example 6NonExample 7Example 7NonExample 8Example 8NonExample 9Example 9NonExample 10Example 10NonExample



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

5Example: 5/src/5Example.cpp
	g++ 5/src/5Example.cpp -o $(shell pwd)/bin/5Example
	g++ 5/src/5Example.cpp -o $(shell pwd)/assembly/5ExampleAssembly -s

5NonExample: 5/src/5NonExample.cpp
	g++ 5/src/5NonExample.cpp -o $(shell pwd)/bin/5NonExample
	g++ 5/src/5NonExample.cpp -o $(shell pwd)/assembly/5NonExampleAssembly -s

6Example: 6/src/6Example.cpp
	g++ 6/src/6Example.cpp -o $(shell pwd)/bin/6Example
	g++ 6/src/6Example.cpp -o $(shell pwd)/assembly/6ExampleAssembly -s

6NonExample: 6/src/6NonExample.cpp
	g++ 6/src/6NonExample.cpp -o $(shell pwd)/bin/6NonExample
	g++ 6/src/6NonExample.cpp -o $(shell pwd)/assembly/6NonExampleAssembly -s

7Example: 7/src/7Example.cpp
	g++ 7/src/7Example.cpp -o $(shell pwd)/bin/7Example
	g++ 7/src/7Example.cpp -o $(shell pwd)/assembly/7ExampleAssembly -s

7NonExample: 7/src/7NonExample.cpp
	g++ 7/src/7NonExample.cpp -o $(shell pwd)/bin/7NonExample
	g++ 7/src/7NonExample.cpp -o $(shell pwd)/assembly/7NonExampleAssembly -s

8Example: 8/src/8Example.cpp
	g++ 8/src/8Example.cpp -o $(shell pwd)/bin/8Example
	g++ 8/src/8Example.cpp -o $(shell pwd)/assembly/8ExampleAssembly -s

8NonExample: 8/src/8NonExample.cpp
	g++ 8/src/8NonExample.cpp -o $(shell pwd)/bin/8NonExample
	g++ 8/src/8NonExample.cpp -o $(shell pwd)/assembly/8NonExampleAssembly -s
	
9Example: 9/src/9Example.cpp
	g++ 9/src/9Example.cpp -o $(shell pwd)/bin/9Example
	g++ 9/src/9Example.cpp -o $(shell pwd)/assembly/9ExampleAssembly -s

9NonExample: 9/src/9NonExample.cpp
	g++ 9/src/9NonExample.cpp -o $(shell pwd)/bin/9NonExample
	g++ 9/src/9NonExample.cpp -o $(shell pwd)/assembly/9NonExampleAssembly -s

10Example: 10/src/10Example.cpp
	g++ 10/src/10Example.cpp -o $(shell pwd)/bin/10Example
	g++ 10/src/10Example.cpp -o $(shell pwd)/assembly/10ExampleAssembly -s

10NonExample: 10/src/10NonExample.cpp
	g++ 10/src/10NonExample.cpp -o $(shell pwd)/bin/10NonExample
	g++ 10/src/10NonExample.cpp -o $(shell pwd)/assembly/10NonExampleAssembly -s

$(shell mkdir -p $(shell pwd)/bin)
$(shell mkdir -p $(shell pwd)/assembly)