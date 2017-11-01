/* 
    This bad example of Least Privilege gives everyone access to all the databases, not just their own.

*/


#include <iostream>


using std::cout;
using std::cin;
using std::string;
using std::endl;


int main () {

    string users[4] = {"Bill", "Jack", "Amy", "Admin"};
    string passwds[4] = {"pwd1", "pwd2", "pwd3", "admin"};
    string databases[3] = {"Bill's DB", "Jack's DB", "Amy's DB"};
    string amyDB = "Welcome to Amy's database...";
    string billDB = "Welcome to Bill's database...";
    string jackDB = "Welcome to Jack's database...";
    
    bool auth = false;
    string dbSelectionString;
    int dbSelection;
    int whichUser = 0;
    string username;
    string passwd;
    cout << "-----Database management tool-----" << endl << "Please enter username: ";
    cin >> username;
    cout << "Password: ";
    cin >> passwd;
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
                cout << "Welcome Administrator" << endl;
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
        cout << endl << "Available Databases: " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << " " << databases[i] << endl;
        }

        
        bool selectDB = true;
        while (selectDB)
        {
            cout << "Select number of database to access: ";
            cin >> dbSelectionString;
            dbSelection = stoi(dbSelectionString);


            switch (dbSelection) {
                case 1:
                {
                    
                    cout << billDB << endl;
                    selectDB = false;
                    break;
                    
                }

                case 2:
                {
                    
                    cout << jackDB << endl;
                    selectDB = false;
                    break;
                    
                }

                case 3:
                {
                    
                    cout << amyDB << endl;
                    selectDB = false;
                    break;
                    
                }
                default:
                {
                    cout << "Couldn't find that DB" << endl;
                }

            }
        }
    }


    return 0;
}