#include <iostream>
#include <string>
// We include Headers.h here to gain access to the functions
#include "Headers.h"

// Shouldn't be using this but am anyways
using namespace std;





int main()
{
    // Declarations
    string charName;
    int partyMembers;
    char selection;
    // Calling functions with passed values
    intro(charName, partyMembers);
    scenario1(charName, partyMembers);
    scenario2(charName, partyMembers);
}
