//Sidney Fergen, 9-4-2026

#include <iostream>
#include <string>
using namespace std;

string One = "You've found an isopod!\n\n";
string Two = "You've found a millipede!\n\n";
string Three = "You've found a worm!\n\n";
string Four = "You've found a tiny spider!\n\n";
string Five = "You've found... is that a bone??\n\n";

int main() {
    int choice = 0;
    
    while (choice != 6) {
        cout << "\n\n* The Critter Discovery Menu * \n";
        cout << "Input a stone's integer to reveal the creature underneath. \n\n";
        cout << "1: Stone One \n";
        cout << "2: Stone Two \n";
        cout << "3: Stone Three \n";
        cout << "4: Stone Four \n";
        cout << "5: The Final Stone \n";
        cout << "6: Go Outside (Exit) \n";
        cout << "\n";
        cin >> choice;
             

        switch (choice) {
        case 1:
            cout << "\n" << One;
            break;
        case 2:
            cout << "\n" << Two;
            break;
        case 3:
            cout << "\n" << Three;
            break;
        case 4:
            cout << "\n" << Four;
            break;
        case 5:
            cout << "\n" << Five;
            break;
        case 6:
            cout << "\n" << "Have fun! I hope you find something cool! :)\n\n\n";
            break;
        default:
            cout << "\n" << "That wasn't a stone!\n\n";
            break;
        }
    }
    return 0;
}