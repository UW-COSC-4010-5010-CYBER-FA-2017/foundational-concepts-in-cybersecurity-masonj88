#include <iostream>
#include <functional>
#include <vector>

using namespace std;


// std::hash is a great example of abstraction because it uses a template to decide which hashing algorithm to use

int main() {

    hash<string> stringHash;
    size_t hashedString = stringHash("Hello World");
    
    hash<vector<bool>> boolVectorHash;
    vector<bool> vectorOfBools = {true, false, true, true, true, false, true};
    size_t hashedBoolVector = boolVectorHash(vectorOfBools);

    cout << "Hashed \"Hello World\": " << hashedString << endl;
    cout << "Hashed vector<bool> containing [true, false, true, true, true, false, true]: " << hashedBoolVector << endl;
















    return 0;
}