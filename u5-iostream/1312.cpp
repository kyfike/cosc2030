/*  Ky Fike, April 27, 2022, 
*   Converting Fahr to Celsius
*       Converts int Fahr temp from 0 to 212 degrees to floating-point
*       Celsius temp with 3 digits of precision. Use: C = 5.0 / 9.0 * (F - 32).
*/

#include <iostream>
#include <iomanip>
using namespace std;

float convert(float);

int main(){
    float F;
    cout << "Input a temperature in Fahrenheit: ";
    cin >> F;
    cout << setprecision(3) << convert(F) << endl;

return 0;
}

float convert(float f){
    float c;
    c = 5.0 / 9.0 * (f - 32);
return c;
}