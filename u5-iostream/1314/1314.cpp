/*  Ky Fike, May 1, 2022, 
*   Reading phone numbers with an overloaded stream extraction operator
*   Fig 10.5 with revisions
*/

#include <iostream>
#include "1314phoneNumber.h"
using namespace std;

int main(){
    PhoneNumber phone;

    cout << "Enter a phone number in the form (123) 456-7890:" << endl;
    
    // cin >> phone invokes operator >> by implicitly issuing
    // the non-member function call operator >> (cin, phone)
    cin >> phone;

    cout << "\nThe phone number entered was:\n";
    // cout << phone invokes operator <<
    cout << phone << endl;

}