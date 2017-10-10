/*
    This is a good example of data hiding because no user can see the names of other users, or the
    databases they don't explicity already know about.  Keeping them hidden leaves a hacker with little
    to start with to find an exploit.

*/

#include <iostream>


using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::getline;
using namespace std;


int main () {

    string users[4] = {"Bill", "Jack", "Amy", "Admin"};
    //passwords are in sequential order, i.e. Bill's password is pwd1
    string passwds[4] = {"pwd1", "pwd2", "pwd3", "admin"};
    string databases[3] = {"BillDB", "JackDB", "AmyDB"};
    string amyDB = "Welcome to Amy's database...";
    string billDB = "Welcome to Bill's database...";
    string jackDB = "Welcome to Jack's database...";
    
    bool auth = false;
    string dbSelectionString = "null";
    int dbSelection;
    int whichUser = 0;
    string username;
    string passwd;
    cout << "-----Database management tool-----" << endl << "Please enter username: ";
    getline(cin,username);
    cout << "Password: ";
    getline(cin,passwd);
    cout << endl;

    for (int i = 0; i < 4; i++)
        {
            if (username == users[i])
                {
                    whichUser = i;
                }
        }

    switch (whichUser) {
        case 0:
        {
            if (passwd == passwds[0])
            {
                cout << "Welcome Bill" << endl;
                auth = true;
                break;
            }
        }

        case 1:
        {
            if (passwd == passwds[1])
            {
                cout << "Welcome Jack" << endl;
                auth = true;
                break;
            }
        }

        case 2:
        {
            if (passwd == passwds[2])
            {
                cout << "Welcome Amy" << endl;
                auth = true;
                break;
            }
        }
        case 3:
        {
            if (passwd == passwds[3])
            {
                cout << "Welcome Admin" << endl;
                auth = true;
                break;
            }
        }
        default:
        {
            cout << "Username/Password not found" << endl;
        }

    }

    if(auth)
    {
        cout << endl << "Enter Database: " << endl;
        
        bool selectDB = true;
        while (selectDB)
        {
            getline(cin, dbSelectionString);
            int whichDatabase = -1;
            for(int i = 0; i < 3; i++)
            {
                if (databases[i] == dbSelectionString)
                {
                    whichDatabase = i;
                }
            }


            switch (whichDatabase) {
                case 0:
                {
                    if (username == "Bill" || username == "Admin")
                    {
                        cout << billDB << endl;
                        selectDB = false;
                        break;
                    }
                    else {goto unauth;};
                }

                case 1:
                {
                    if (username == "Jack" || username == "Admin")
                    {
                        cout << jackDB << endl;
                        selectDB = false;
                        break;
                    }
                    else {goto unauth;};
                }

                case 2:
                {
                    if (username == "Amy" || username == "Admin")
                    {
                        cout << amyDB << endl;
                        selectDB = false;
                        break;
                    }
                    else {goto unauth;};
                }
                default:
                unauth:
                {
                    cout << "Unauthorized to access that database/Database not found" << endl;
                }

            }
        }
    }


    return 0;
}