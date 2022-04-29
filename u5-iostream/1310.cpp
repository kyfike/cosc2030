/*  Ky Fike, April 27, 2022, 
*   Rounding
*       Write a program that prints the value 100.453627 rounded to the nearest digit:
*       10th, 100th, 1,000th, and 10,000th.
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    float a = 100.453627;
    cout << "Original: " << fixed << a << endl   
         << "Rounded to the ...:\nTenths: " << setprecision(1)<< a << endl
         << "Hundreths: " << setprecision(2)<< a << endl
         << "Thousandths: " << setprecision(3)<< a << endl
         << "Ten thousandths: " << setprecision(4)<< a << endl;

return 0;
}