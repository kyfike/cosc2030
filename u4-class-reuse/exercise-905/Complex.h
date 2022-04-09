/******
 * Ky Fike on Apr 8, 2022
 * Exercise 9.05:
 * Complex - Class
 * 
 * references:
 * fahad-cprogramming.blogspot.com
 * *****/
#include <iostream> //cout; cin;
#include <string> //to_string function
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
    // constructors.
    Complex();
    Complex(double);
    Complex(double, double);
    Complex(Complex &);
    
    // get functions.
    double getReal() const;
    double getImag() const;

    // set.
    void setReal(double);
    void setImag(double);
    
    // operations.
    Complex add(Complex);
    Complex subtract(Complex);
    Complex multiply(Complex);

    // display.
    std::string toString(Complex);
    void print();

private:
    double real, imag;
};

#endif