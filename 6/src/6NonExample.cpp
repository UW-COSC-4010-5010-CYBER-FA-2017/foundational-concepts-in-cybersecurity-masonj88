#include <iostream>
#include <string>

using namespace std;


int main() {

    string password = "abc123";
    string givenPassword;
    
    cout << "Enter password: ";
    getline(cin, givenPassword);
    if (givenPassword != password) {
        cout << endl << "Incorrect, exiting" << endl;
        return 0;
    }
    


    cout << endl << "Access Granted!" << endl;

    return 0;
}