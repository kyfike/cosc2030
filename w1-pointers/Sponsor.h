// store info about a sponsor including their name and amount they sponsored

#ifndef SPONSOR_H
#define SPONSOR_H
#include <iostream>
using namespace std;

class Sponsor {
    private: 
        string fName;
        string lName;
        int count = 0;
        double total;
        double* dPtr;
    public: 
        Sponsor();
        Sponsor(string, double);
        void setFName();
        void setLName();
        void setDonations();
        void setTotal();
        string getFName();
        string getLName();
        void getTotal();
        bool isBigDonor(); // return true if amount is > 1,000
        void displayInfo();
        ~Sponsor();
};

#endif