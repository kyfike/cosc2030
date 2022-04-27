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

class Rational {
public:
    // constructors.
    Rational();
    Rational(int);
    Rational(int, int);
    Rational(Rational &);
    
    // get functions.
    int getNum() const;
    int getDen() const;

    // set.
    void setNum(int);
    void setDen(int);
    
    // operations.
    Rational add(Rational);
    Rational subtract(Rational);
    Rational multiply(Rational);

    // display.
    std::string toString(Rational);
    void print();

private:
    int num, den;
};

#endif
