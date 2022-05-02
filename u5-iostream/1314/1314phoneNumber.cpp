/*  Ky Fike, April 27, 2022, 
*   Reading phone numbers with an overloaded stream extraction operator
*   Fig 10.4: PhoneNumber.cpp with revisions
*/

#include <iomanip>
#include <string>
#include "1314phoneNumber.h"
using namespace std;

ostream& operator << (ostream& output, const PhoneNumber& number){
    output << "Area code: " << number.areaCode << "\nExchange: "
        << number.exchange << "\nLine: " << number.line << "\n("
        << number.areaCode << ") " << number.exchange << "-"
        << number.line << "\n";
    return output; // enables cou << a << b << c;
}


istream& operator >> (istream& input, PhoneNumber& number){
    input.ignore(); // skip (
    input >> setw(3) >> number.areaCode;
    input.ignore(2); // skip ) and space
    input >> setw(3) >> number.exchange;
    input.ignore(); // skip dash
    input >>setw(4) >> number.line;
    return input; // enables cin >> a >> b >> c;
}

/*
My attempt at copying the char phoneNumber array into a PhoneNumber object.
*/
PhoneNumber::PhoneNumber(char* array[], PhoneNumber& number){
    char area[3], ex[3], line[4];
    for (int i = 0; i < 14; i++){ // areacode
        if (i < 4 && i > 0) {
            area[i] = *array[i];
        }
        if (i < 9 && i > 5) { // exchange
            ex[i] = *array[i];
        }
        if (i < 15 && i > 9) { // line
            line[i] = *array[i];
        }
    }
    number.areaCode = area;
    number.exchange = ex;
    number.line = line;
}
