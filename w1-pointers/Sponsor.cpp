#include "Sponsor.h"
#include <iostream>
using namespace std;

//constructor
Sponsor::Sponsor(){
    setFName();
    setLName();
    setDonations();
    setTotal();
    displayInfo();
}/* // Do I need these functions?
string Sponsor::getLName(){
    return lName;
}
string Sponsor::getFName(){
    return fName;
}
*/
//set functions
void Sponsor::setFName(){
    cout << "\nenter first name: ";
    cin >> fName;
}
void Sponsor::setLName(){
    cout << "enter last name: ";
    cin >> lName;
}

void Sponsor::setDonations(){

    double amount;
    cout << "enter donation: $ ";
    cin >> amount;
    double *copy;

    while (amount != 0){
        count++; // count how many donations there are
        copy = new double [count];
        copy[count-1] = amount; // store the inputted value in the last array index

        // when there is only ONE donation entered:
        if (count == 1){
            dPtr = new double [count];
            dPtr[0] = copy[0];
            delete [] copy;
            //cout << "the only donation is: " << dPtr[0] << endl;         // test: is the first donation getting stored correctly?
        }
        // when there is MORE THAN ONE donation:
        else {
            // store existing values in the temporary array
            for (int i = 0; i < count-1; i++){
                copy[i] = dPtr[i];
            }
            // resize Sponsor::dPtr (persisting array) so it can store an extra donation value
            delete [] dPtr;
            dPtr = new double [count];  
            for (int i = 0; i < count; i++){
                dPtr[i] = copy[i];
            } 
            delete [] copy;
        }

        cout << "enter donation: $ ";
        cin >> amount;
    }
}

void Sponsor::setTotal(){
    for(int i = 0; i < count; i++){
        total += dPtr[i];
    }
}

void Sponsor::displayInfo(){
    cout << fName << " " << lName << " donated a total amount of $" << total << ".\n" << "Their " << count << " donations were: $";
    for (int i = 0; i < count; i++){
        cout << dPtr[i] << "  ";
    }
    cout << endl << endl;
}

// destructor: free the memory,
Sponsor::~Sponsor(){
    delete [] dPtr; // deallocate
}