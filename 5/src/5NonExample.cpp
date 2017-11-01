#include <iostream>
#include <vector>

using namespace std;

// takes a vector and multiplies each element by the user-supplied amount
vector<double> MultiplyVectorElements(double multBy, vector<double> doubleVector) {
  
    for (auto & element : doubleVector) {
        element = element * multBy;
    }

    return doubleVector;

}

// takes a vector and adds to each element by the user-supplied amount
vector<double> AddVectorElements(double addBy, vector<double> doubleVector) {
    
      for (auto & element : doubleVector) {
          element = element + addBy;
      }
  
      return doubleVector;
  
  }

int main() {   


    vector<double> firstVector = {1,2,3,4,5,6,7,8,9,10};


    // Uses the Map function the multiply all numbers in firstVector by 5, then assigns the vector to secondVector
    vector<double> secondVector = MultiplyVectorElements(5, firstVector);

    vector<double> thirdVector = AddVectorElements(5, firstVector);

    cout << "Second Vector Contents: ";
    for (auto i = secondVector.begin(); i != secondVector.end(); i++) {
        cout << *i << " ";
    }

    cout << endl << "Third Vector Contents: ";
    for (auto i = thirdVector.begin(); i != thirdVector.end(); i++) {
        cout << *i << " ";
    }

return 0;


}