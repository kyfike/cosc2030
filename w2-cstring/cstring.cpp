#include <iostream>
#include <cctype> // character testing
#include <cstring>
using namespace std;

int main(){
    /*
    // char testing
    char letter = 'A';
    // cout << sizeof(letter) << endl; // 1 byte

    // isupper() returns true
    if (isupper(letter)){
        cout << letter << ": uppercase" << endl;
    }
    char lower = letter + 32;
    cout << lower << ": after adding 32 (ascii), the letter is lowercase." << endl;

*/
    // isalph() --- a-z, A-Z
    // isalnum() -- alphanumeric (a-z, A-Z, and 0-9. special chars aren't included: !+$#%)
    // isdigit() -- 0-9
    // islower() -- 
    // isprint() -- 
    // isupper() --
    // isspace() -- whitespace char "/t" "/v" "/n"
// "\v" continues typing on a newline at the end of the line above it.
    

    /*
    const int SIZE = 15;
    const int MIN = 7;
    char username[SIZE];

    cout << "Create a username that is less than " << SIZE - 1 << endl;
    cout << "Your username must be all lowercase." << endl;
    cout << "Your username must be greater than " << MIN << endl;
    cout << "Enter your username: ";
    cin.getline(username, SIZE);

    // test the username input
    int i = 0;
    while (islower(username[i])){
        cout << username[i];
        i++;
        }
    */
    

    // 10.2 char case conversion
    // toupper(), tolower()
    char letter = 'r';
    char uletter = toupper(letter);
    cout << "uletter " << uletter << endl;

    // C-strings, strings
    // C programming language does not have objects, so it can't have string objects.
    // -- old code
    // -- use older libraries

    // literal: an actual value
    // All string literals are stored in memory as C-strings. 
    // You must have room for the '\0' terminator in a C-string.
    // 10.4 C-string library
    // strlen()
    //strcat(c1, c2) -> both strings get stored consecutively in c1
    const int SI = 13;
    char string[SI] = "hello";
    char string2[SI] = "world!";
    cout << strcat(string, string2) << endl;
    cout << string;





/*
    char null = '\0';
    if(islower(null)){
        cout << "null pointer IS lower!";
    }
    else {
        cout << "null pointer IS upper?";
    }
*/
}