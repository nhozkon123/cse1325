#include "fraction.h"
#include <iostream>

Fraction::Fraction (int n, int d){
    numerator = n;
    denominator = d;
}

int Fraction::getNumerator (){
    return numerator;
}
int Fraction::getDenominator (){
    return denominator;
}
void Fraction::setNumerator (int n){
    numerator = n;
}
void Fraction::setDenominator (int d){
    denominator = d;
}
istream& operator >> (istream& input, Fraction& fraction){
    std::cout << "Enter Numerator:";
    std::input >> fraction.numerator;
    std::cout << "Enter Denominator:";
    std::input >> fraction.denominator;
}
ostream& operator << (ostream& output, Fraction& fraction){
    output << fraction.numerator;
    output << "/";
    output << fraction.denominator;
}
Fraction Fraction::operator+(const Fraction& num){
    Fraction add ((numerator * num.denominator + num.numerator * denominator),(denominator * num.denominator));
    return add;
}
Fraction Fraction::operator-(const Fraction& num){
    Fraction sub ((numerator * num.denominator-num.numerator * denominator), (denominator * num.denominator));
    return sub;
}
Fraction Fraction::operator*(const Fraction& num){
    Fraction mul ((numerator * num.numerator),(denominator * num.denominator));
    return mul;
}
Fraction Fraction::operator/(const Fraction& num){
    Fraction div ((numerator * num.denominator), (denominator * num.numerator));
    return div;
}
bool Fraction::operator == (const Fraction& num){
    if (numerator == num.numerator && denominator == num.denominator){
        return true;
    }
    else {
        return false;
    }
}




