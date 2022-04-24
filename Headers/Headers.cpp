#include <iostream>
// Include Headers.h in order to define the functions
#include "Headers.h"

// Shouldn't be using this but am anyways
using namespace std;

// Function using pass by reference
void intro(string& character, int& party) {
    
    cout << "Please enter the following...\n";

    cout << "Enter your characters name: ";
    cin >> character;

    cout << "Enter the number of party members: ";
    cin >> party;

}

// Function that returns a char
char scenario1(string character, int party) {
    cout << "\n" << character << " the adventurer and their party of " << party << " members happen"
        " across a dungeon when out looking for quests.\n";
    cout << "\nDo you enter the dungeon?\nEnter y/n: ";
    char selection;
    cin >> selection;
    if (selection == 'y') {
        cout << "Your adventure continues." << endl;
    }
    else {
        cout << "Wow, how lame." << endl;
        exit(0);
    }
    return selection;
} 

// Function that returns a char
char scenario2(string character, int party) {
    cout << "They stumble through the dark, " << character << " lights a torch and passes " << party << " additional torches to their friends.\n";
    cout << "As " << character << " and the " << party << " brave heroes walk through the decrepit dungeon they come upon a door\n";
    cout << "with what must be an extraordinarily bright light coming from behind it." << endl;
    cout << "Do you open the door?\nEnter y/n: ";
    char selection;
    cin >> selection;
    if (selection == 'y') {
        cout << "Amazing! It's a giant mound of treasure. What a stroke of luck, good thing you kept braving through." << endl;
    }
    else {
        cout << "Hmm, better hope that wasn't a mound of treasure behind that door. Oh well, you escape with your life." << endl;
    }
    return selection;
}