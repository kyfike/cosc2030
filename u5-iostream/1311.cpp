/*  Ky Fike, April 27, 2022, 
*   Length of a String
*       Inputs a string from the keyboard and determines the length of the string.
*       Print the string in a field width that is twice the length of the string.
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    const int SIZE = 100;
    char chString[SIZE] = {0};
    cout << "Enter a string: ";
    cin.get(chString, SIZE);

    int count = 0; // traverse the array and count characters stored therein
    for (int i = 0; i < 100; i++){
        if (chString[i] != NULL)
            count += 1;
    }
    cout << endl << "The string length is: " << count << endl;
    cout << right << setw(count * 2) << chString;
    

    return 0;
}