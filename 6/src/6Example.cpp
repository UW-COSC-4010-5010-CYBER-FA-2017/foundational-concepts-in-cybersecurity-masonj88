#include <iostream>
#include <string>

using namespace std;


int main() {

    string password = "abc123";
    string key = "123456789";
    string accessCode = "1234";

    string givenPassword;
    string givenKey;
    string givenAccessCode;


    cout << "Enter password: ";
    getline(cin, givenPassword);
    if (givenPassword != password) {
        cout << endl << "Incorrect, exiting" << endl;
        return 0;
    }
    cout << endl << "Enter key: ";
    getline(cin, givenKey);
    if (givenKey != key) {
        cout << endl << "Incorrect, exiting" << endl;
        return 0;
    }
    cout << endl << "Enter access code: ";
    getline(cin, givenAccessCode);
    if (givenAccessCode != accessCode) {
        cout << endl << "Incorrect, exiting" << endl;
        return 0;
    }


    cout << endl << "Access Granted!" << endl;

    return 0;
}