#include <iostream>
#include <vector>

using namespace std;

// Map is a function that takes as arguments a function that takes two doubles and returns a double, an argument for one of those two doubles,
// and then a vector.  It then iterates through the vector calling the supplied function on the current element of the vector, and the user supplied argument, 
// and each double in the vector as the other argument.  It then returns a new vector with the elements being the ones returned by
// the supplied function.
vector<double> Map(double (*func)(double, double), double firstValue, vector<double> doubleVector) {
    for (auto & element : doubleVector) {
        element = func(element, firstValue);
    }

    return doubleVector;

}

// Example function that takes two doubles, multiplies them, and returns the result.
double multiplyNumbers(double value1, double value2) {
    return value1 * value2;


}

int main() {   


    vector<double> firstVector = {1,2,3,4,5,6,7,8,9,10};


    // Uses the Map function the multiply all numbers in firstVector by 5, then assigns the vector to secondVector
    vector<double> secondVector = Map(multiplyNumbers, 5, firstVector);

    for (auto i = secondVector.begin(); i != secondVector.end(); i++) {
        cout << *i << " ";
    }


return 0;


}