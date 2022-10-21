#include <iostream>
#include "Sponsor.h"
using namespace std;

int main(){
    int numSponsors;
    Sponsor* sPtr = nullptr;
    cout << "\nHow many sponsors are there? ";
    cin >> numSponsors;

    sPtr = new Sponsor[numSponsors]; //legal, allocate memory, and let the constructor do the rest!
    delete [] sPtr; // deallocate array of sponsors

}