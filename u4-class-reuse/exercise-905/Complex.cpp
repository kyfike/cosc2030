/******
 * Ky Fike
 * *****/

#include <iostream> //cout; cin;
#include <string> //to_string function
#include "Complex.h"
using namespace std;

Complex::Complex(){
    real = 0;
    imag = 0;
}

Complex::Complex(double r){
    real = r;
    imag = 0;
}

Complex::Complex(double r, double i){
    real = r;
    imag = i;
}

Complex::Complex(Complex& obj){
    real = obj.real;
    imag = obj.imag;
 }

Complex Complex::add(Complex b){
    Complex Add;
    Add.real = real + b.real;
    Add.imag = imag + b.imag;
return Add;
}

Complex Complex::subtract(Complex b){
    Complex Subtract;
    Subtract.real = real - b.real;
    Subtract.imag = imag - b.imag;
return Subtract;
}

Complex Complex::multiply(Complex b){
    Complex Mult;
    Mult.real = real*b.real - imag*b.imag;
    Mult.imag = real*b.imag + b.real*imag;
return Mult;
}

void Complex::print(){
    cout << real << "+" << imag << "i" << "\n\n";
}

double Complex::getReal() const{
    return real;
}

double Complex::getImag() const{
    return imag;
}

void Complex::setReal(double re){
    real = re;
}

void Complex::setImag(double im){
    imag = im;
}

/*
std::string toString(){
    
return std::to_string(a);
}*/