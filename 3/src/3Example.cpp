/*

This good example uses private variables whose access is controlled by public functions. (See lines 21-48).


*/


#include <iostream>
#include <array>
#include <string>
#include <ctime>
#include <random>

using namespace std;



class Notes {
    
        private:
        string Name;
        string content;
    
        public:
        Notes(string noteName) {
            Name = noteName;
            content = "Null";
        }
        Notes(){
            Name = "Null";
            content = "Null";
        }
    
        void editNote() {
            string newContent;
            getline(cin, newContent);
            this->content = newContent;
        }
        string getName() {
            return Name;
        }
        void printContent() {
            cout << endl << content << endl << endl;
        }
    
    
    };


    void noteTaker(std::array<Notes,25>&allNotes) {
        
        string selectionString;
        int selection;
        cout << "Welcome to Note Taker 3000!" << endl;
        main_menu:
        cout << "1: New note" << endl << "2: Edit note" << endl << "3: View notes" << endl << "4: Back to main menu" << endl << "5: Crash me!" << endl << endl;
        selection = -1;
        cout << "Make Selection: ";
        getline(cin, selectionString);
        selection = stoi(selectionString);
    
        switch(selection) {
            case 1: {
                string nameOfNote;
                cout << "Enter the name of the new note: " << endl;
                getline(cin, nameOfNote);
                Notes newNote(nameOfNote);
                for(int i = 0; i < allNotes.size() + 1; i++)
                {
                    if (allNotes[i].getName() == "Null")
                    {
                        allNotes[i] = newNote;
                        cout << nameOfNote << " created, you can type your note now." << endl;
                        allNotes[i].editNote();
                        break;
                    }
                }
                cout << endl;
                goto main_menu;
            }

            case 2: {
                cout << "Which note would you like to edit?: " << endl;
                for(int i = 0; i < sizeof(&allNotes); i++)
                {
                    if(allNotes[i].getName() != "Null")
                    cout << i << ". " << allNotes[i].getName() << endl;
                }
                string selectionstring2;
                getline(cin, selectionstring2);
                int selection = stoi(selectionstring2);
                allNotes[selection].editNote();
                cout << endl;
                goto main_menu;
        
            }

            case 3: {
                cout << endl << "All notes: " << endl;
                for(int i = 0; i < sizeof(&allNotes); i++)
                {
                    if(allNotes[i].getName() != "Null")
                    cout << i << ". " << allNotes[i].getName() << endl;
                }
                cout << endl;
                cout << "Which note would you like to view?" << endl;
                string selection3;
                getline(cin, selection3);
                int selection3Int = stoi(selection3);
                allNotes[selection3Int].printContent();
                goto main_menu;
            }

            case 4: {
                return;
            }
            case 5: {
                try {
                   throw "Crashed";
                }
                catch(...) {
                    cout << "Well it looks like Note Taker 3000 crashed, at least the whole program didn't burn, right?" << endl << "Returning to main menu...." << endl << endl;
                }
                
                return;
            }
            default: {
                goto main_menu;
            }
    
    
    
    
        }
    
    
    }
    
    void randomGen() {
        random_device rd;
        mt19937 eng(rd());



        string digits;
        cout << "How many digits for your random number?" << endl << "1" << endl << "2" << endl << "3" << endl << "4" << endl << "5" << endl;
        try_again:
        getline(cin, digits);
        switch(stoi(digits)) {
            case 1: {
                uniform_int_distribution<> distr(0,9);
                cout << "Your random number is: " << distr(eng) << endl << endl;
                break;
            }
            case 2: {
                uniform_int_distribution<> distr(10,99);
                cout << "Your random number is: " << distr(eng) << endl << endl;
                break;
            }
            case 3: {
                uniform_int_distribution<> distr(100,999);
                cout << "Your random number is: " << distr(eng) << endl << endl;
                break;
            }
            case 4: {
                uniform_int_distribution<> distr(1000,9999);
                cout << "Your random number is: " << distr(eng) << endl << endl;
                break;
            }
            case 5: {
                uniform_int_distribution<> distr(10000,99999);
                cout << "Your random number is: " << distr(eng) << endl << endl;
                break;
            }
            default: {
                cout << "Try again, that wasn't an option!" << endl << endl;
                goto try_again;
            }

        }
    
    
    }





int main() {
    std::array<Notes,25>allNotes;
    void noteTaker(std::array<Notes,25>&);
    void randomGen();
    string selectionString;
    int selection;

    
    bool selecting = true;
    while (selecting)
    {

        cout << "Welcome to 'Super Awesome Program with Two Applications'" << endl << endl << "Which program would you like to access? (Enter number)";
        cout << endl <<  "1: Note Taker 3000" << endl << "2: (Psuedo)Random Number Generator" << endl << "3: Quit" << endl << endl;

        getline(cin,selectionString);
        selection = stoi(selectionString);


        switch (selection) {

            case 1: {
                noteTaker(allNotes);
                break;
            }

            case 2: {
                randomGen();
                break;
            }
            case 3: {
                return 0;
            }
            default: {
                cout << "Not a valid command!" << endl;
            }
        }
    }









return 0;    



}




