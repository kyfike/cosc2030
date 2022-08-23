// store info about a sponsor including their name and amount they sponsored

#ifndef SPONSOR_H
#define SPONSOR_H
#include <iostream>
using namespace std;

class Sponsor {
    private: 
        string name;
        double amount;
    public: 
        Sponsor(string, double);
        Sponsor(string);
        void setName(string);
        void setAmount(double);
        string getName();
        double getAmount();
        bool isBigDonor(); // return true if amount is > 1,000
        void displayInfo();

};

#endif