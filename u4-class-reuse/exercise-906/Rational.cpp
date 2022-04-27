/******
 * Ky Fike
 * *****/

#include <iostream> //cout; cin;
#include <string> //to_string function
#include "Rational.h"
using namespace std;

Rational::Rational(){
    num = 0;
    den = 0;
}

Rational::Rational(int n){
    num = n;
    den = 1;
}

Rational::Rational(int n, int d){
    num = n;
    den = d;
}

Rational::Rational(Rational& obj){
    num = obj.num;
    den = obj.den;
 }

Rational Rational::add(Rational b){
    Rational Add;
    Add.num = num + b.num;
    Add.den = den + b.den;
return Add;
}

Rational Rational::subtract(Rational b){
    Rational Subtract;
    Subtract.num = num - b.num;
    Subtract.den = den - b.den;
return Subtract;
}

Rational Rational::multiply(Rational b){
    Rational Mult;
    Mult.num = 1;
    Mult.den = 1;
return Mult;

Rational Rational::divide(Rational b){
    Rational Div;
    Div.num = 1;
    Div.num = 1;
return Div;
}

void Rational::print(){
    cout << num << "+" << den << "i" << "\n\n";
}

int Rational::getNum() const{
    return num;
}

int Rational::getDen() const{
    return den;
}

void Rational::setNum(double re){
    num = re;
}

void Rational::setDen(double im){
    den = im;
}

/*
std::string toString(){
    
return std::to_string(a);
}*/