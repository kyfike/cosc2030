/*  Ky Fike, May 1, 2022, 
*   Reading phone numbers with an overloaded stream extraction operator
*   Fig 10.5 with revisions
*/

#include <iostream>
#include "1314phoneNumber.h"
using namespace std;

int main(){
    const int SIZE = 14 +1; // +1 for the null character signifying the end of the string.
    char testTotal[SIZE];
    string inNum; // We will use this string to return the length of the input. If userInput < 14, we will manually set the failbit.

    do{
        cin.clear();
        std::cout << "Enter a phone number in the form (123) 456-7890:" << endl;

        cin.getline(testTotal, SIZE);
        inNum = testTotal;
        if (inNum.length() < 14 || cin.fail()) {
            cin.clear(ios::failbit);
            std::cout << "Invalid number of characters! ";
        }

        // This next section is part b)
        // The phone number array[1] will be the first digit of the areacode.
        // The [6] = first digit of the exchange.
        else if (testTotal[1] == '0'  || testTotal[1] == '1'  || testTotal[5] == '0'  || testTotal[5] == '1'){
            cin.clear(iostream::failbit);
            std::cout << "Invalid entry (due to the first digit of the area code or the first digit of the exchange)." << endl;
            //return 0;
        }

        // This last section is part c)
        // The phone array[2] will be the middle digit for the area code.
        else if (testTotal[2] == '0'  || testTotal[2] == '1'){
            cin.clear(iostream::failbit);
            std::cout << "Invalid entry (due to the middle digit of the area code)." << endl;
            //return 0;
        }
    }
    while (cin.fail());

    std::cout << "The phone number you entered is: " << testTotal << endl;

    // I couldn't figure out how to copy my char array to the phone object, so I just printed it out using the char array
    // since it is already formatted correctly and we've confirmed the values therein are valid.
    return 0;
}