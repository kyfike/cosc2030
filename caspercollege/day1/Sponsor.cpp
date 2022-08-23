#include "Sponsor.h"
#include <iostream>
using namespace std;

// make constructor defaults
Sponsor::Sponsor(string n){
    name = n;
    amount = 0.0;
}
Sponsor::Sponsor(string n, double a){
    name = n;
    amount = a;
}

//return the get functions
double Sponsor::getAmount(){
    return amount;
}
string Sponsor::getName(){
    return name;
}

//set functions
void Sponsor::setName(string n){
    cout << "Enter the donor's name: ";
    cin >> n;
}
void Sponsor::setAmount(double a){
    cout << "Total donation: $";
    cin >> a;
}

//other functions
bool Sponsor::isBigDonor(){
    bool big = 0;
    if (amount > 1000) {
        big = true;
    }
    return big;
}

void Sponsor::displayInfo(){
    cout << name << ": $" << amount << endl;
}