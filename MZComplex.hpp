#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class MZComplex{
private:
    float re, im;

public:
    // Getters & Setters
    float real() const;
    float imag() const;
    void setReal(float real);
    void setImag(float imag);

    // Constructor
    MZComplex(float, float);

    // Comparison Operator ==
    bool operator==(const MZComplex&) const;

    // Arithmetic Operators
    MZComplex operator+(MZComplex&) const;
    MZComplex operator-(MZComplex&) const;
    MZComplex operator*(MZComplex&) const;
    MZComplex operator/(MZComplex&) const;
    
    // Modulus
    float mod() const;

    // Argument
    float arg() const;

    // Conjugate
    MZComplex conj() const;

    // Print Function
    void printMZComplex() const;
};