#include "MZComplex.hpp"

// Getters & Setters
float MZComplex::real() const{
    return re;
}
float MZComplex::imag() const{
    return im;
}
void MZComplex::setReal(float re){
    this->re = re;
}
void MZComplex::setImag(float im){
    this->im = im;
}

// Constructor
MZComplex::MZComplex(float re, float im){
    this->setReal(re);
    this->setImag(im);
}

// Comparison Operator ==
bool MZComplex::operator==(const MZComplex& z) const{
    return (re == z.re) && (im == z.im);
}

// Addition Operator
MZComplex MZComplex::operator+(MZComplex& z) const{
    return MZComplex(re+z.re, im+z.im);
}

// Substutution Operator
MZComplex MZComplex::operator-(MZComplex& z) const {
    return MZComplex(re-z.re, im-z.im);
}

// Multiplication Operator
MZComplex MZComplex::operator*(MZComplex& z) const{
    return MZComplex(((re*z.re)-(im*z.im)), ((re*z.im)+(im*z.re)));
}

// Division Operator
MZComplex MZComplex::operator/(MZComplex& z) const{
    return MZComplex((((re*z.re)+(im*z.im))/((z.re*z.re)+(z.im*z.im))), (((im*z.re)-(re*z.im))/((z.re*z.re)+(z.im*z.im))));
}

// Modulus
float MZComplex::mod() const{
    return sqrt((re*re)+(im*im));
}

// Argument
float MZComplex::arg() const{
    if (re == 0 && im == 0)
        return 0.0f;    // undefinied
    else
        return atan2(im, re);   
}

// Conjugate
MZComplex MZComplex::conj() const{
    return MZComplex(re, -im);
}

// Print Function
void MZComplex::printMZComplex() const{
    cout << this->real() << " + " << this->imag() << "i";
}

