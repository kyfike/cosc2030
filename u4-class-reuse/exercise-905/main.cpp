#include <iostream> //cout; cin;
#include <string> //to_string function
#include "Complex.h"
using namespace std;

int main(){
    double real1, imag1, real2, imag2;

    Complex obj(35, 4);
    obj.print(); //test an imaginary num initialization

    cout << "Enter the Real part of the first number: ";
        cin >> real1;
    cout << "Enter the imaginary part of the first number: ";
    cin >> imag1;
        Complex obj1(real1,imag1);
    obj1.print();

    cout << "Enter the Real part of the second number: ";
    cin >> real2;
    cout << "Enter the Imaginary part of the second number: ";
        cin >> imag2;
        Complex obj2(real2, imag2);
    obj2.print();

    Complex result;
    result = obj1.add(obj2);
    cout << "Result of addition: (" << result.getReal() << ")+(" << result.getImag() << ")i\n";


return 0;
}