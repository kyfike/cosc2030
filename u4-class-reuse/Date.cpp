// Fig. 9.15: Date.cpp
// Date class member-function definitions.
#include <sstream>
#include <string>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor (should do range checking)
Date::Date(unsigned int m, unsigned int d, unsigned int y){
    month = m ;
    day = d;
    year = y;
}

// print Date in the format mm/dd/yyyy
string Date::toString() const {
    ostringstream output;
    output << month << '/' << day << '/' << year;
    return output.str();
}