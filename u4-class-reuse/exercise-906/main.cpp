#include <iostream> //cout; cin;
#include <string> //to_string function
#include "Rational.h"
using namespace std;

int main(){
    double num1, den1, num2, den2;

    Rational obj(35, 4);
    cout << "Example: ";
    obj.print(); //test an imaginary num initialization

    cout << "Enter the Real part of the first number: ";
        cin >> num1;
    cout << "Enter the imaginary part of the first number: ";
    cin >> den1;
        Rational obj1(num1,den1);
    obj1.print();

    cout << "Enter the Real part of the second number: ";
    cin >> num2;
    cout << "Enter the Imaginary part of the second number: ";
        cin >> den2;
        Rational obj2(num2, den2);
    obj2.print();

    Rational result;
    result = obj1.add(obj2);
    cout << "Result of addition: (" << result.getNum() << ")+(" << result.getDen() << ")i\n";

    result = obj1.subtract(obj2);
    cout << "Result of subtraction: (" << result.getNum() << ")+(" << result.getDen() << ")i\n";

    result = obj1.multiply(obj2);
    cout << "Result of multiplication: (" << result.getNum() << ")+(" << result.getDen() << ")i\n";
    

return 0;
}