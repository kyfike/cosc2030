/*  Ky Fike, April 27, 2022, 
*   Inputting decimal, octal, and hex values
        Write a program to test the inputting of int values in decimal, oct, and hex form.
*       Output each int read by the program in all 3 formats. Test the program with the following input data: 10, 010, 0x10.
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    // use test nums: 10, 010, and 0x10.
    int in;
    cout << "Input a decimal value: ";
    cin >> dec >> in;
    cout << "Dec:" << dec << in << endl
         << "Oct:" << oct << in << endl
         << "Hex:" << hex << in << endl;

    cout << "Input an octal value: ";
    cin >> oct >> in;
    cout << "Dec:" << dec << in << endl
         << "Oct:" << oct << in << endl
         << "Hex:" << hex << in << endl;

    cout << "Input a hexadecimal value: ";
    cin >> hex >> in;
    cout << "Dec:" << dec << in << endl
         << "Oct:" << oct << in << endl
         << "Hex:" << hex << in << endl;

return 0;
}