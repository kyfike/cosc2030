/*  Ky Fike, April 27, 2022, 
*   Reading phone numbers with an overloaded stream extraction operator
*   Fig 10.4: PhoneNumber.cpp with revisions
*/

#include <iomanip>
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