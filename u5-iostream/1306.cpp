/*  Ky Fike, April 27, 2022, 
*   Write C++ Statements
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


int main(){
// a - print int 'a' left justified with a field width of 15
    int a = 40000;
    cout << left << setw(15) << a;

// b - read a string into char array 'state'
    string b = "Hello, friend!";
    char state[b.length()];     // from the string library
    for (int i = 0; i < sizeof(state); i++){
        state[i] = b[i];
        cout << state[i];
    }
    cout << endl;
    /* or
    char state2[20];
    cin >> state2;
    // ... and thenprint state2 array
    cout << endl;
    */

// c - print '200' with and without a sign
    int c = 200;
    cout << c << endl;
    cout << showpos << c << endl;

// d - print the decimal value '100' in hex form w/ 0x
    int d = 100;
    cout << hex << d << endl;

// e - read char into array 'charArray' until the char 'p' is encountered, up to 10 char (include null char). Extract the delimiter from the input stream, and discard it.
    char charArray[10];
    cin.getline(charArray, 10, 'p');

// f - print '1.234' in a 9 digit field with preceding zeros
    float f = 1.234;
    cout << noshowpos;
    cout << right << setw(9) << setfill('0') << f;

return 0;

}