#include "MZComplex.hpp"

int main() {
    // Create complex numbers
    MZComplex z1(2.0f, 3.0f);
    MZComplex z2(4.0f, 5.0f);

    // Test getters
    z1.printMZComplex();
    cout << "\n";
    z2.printMZComplex();
    cout << "\n\n";
    cout << "------------------- Test Getters -------------------" << endl;
    cout << "Real part of z1: " << z1.real() << endl;
    cout << "Imaginary part of z1: " << z1.imag() << "\n" << endl;

    // Test setters
    cout << "------------------- Test Setters -------------------" << endl;
    z1.setReal(6.0f);
    z1.setImag(7.0f);
    cout << "Updated z1: ";
    z1.printMZComplex();
    cout << "\n\n" << endl;

    cout << "------------------- Test Operators -------------------" << endl;
    // Test addition operator

    MZComplex sum = z1 + z2;
    cout << "Sum of ";
    z1.printMZComplex();
    cout << " and ";
    z2.printMZComplex();
    cout << " is ";
    sum.printMZComplex();
    cout << "\n\n";

    // Test subtraction operator
    MZComplex diff = z1 - z2;
    cout << "Difference of ";
    z1.printMZComplex();
    cout << " and ";
    z2.printMZComplex();
    cout << " is ";
    diff.printMZComplex();
    cout << "\n\n";

    // Test multiplication operator
    MZComplex product = z1 * z2;
    cout << "Product of ";
    z1.printMZComplex();
    cout << " and ";
    z2.printMZComplex();
    cout << " is ";
    product.printMZComplex();
    cout << "\n\n";

    // Test division operator
    MZComplex quotient = z1 / z2;
    cout << "Quotient of ";
    z1.printMZComplex();
    cout << " and ";
    z2.printMZComplex();
    cout << " is ";
    quotient.printMZComplex();
    cout << "\n\n";

    // Test modulus and argument
    cout << "Modulus of "; 
    z1.printMZComplex(); 
    cout << " is " << z1.mod() << "\n" << endl;
    cout << "Argument of ";
    z1.printMZComplex();
    cout << " is " << z1.arg() << "\n" << endl;

    // Test conjugate
    MZComplex conjugate = z1.conj();
    cout << "Conjugate of ";
    z1.printMZComplex();
    cout << " is ";
    conjugate.printMZComplex();
    cout << "\n\n" << endl;

    // Test of Comparaison Operator
    cout << "------------------- Test Equality -------------------" << endl;
    if(z1 == z2)
        cout << "z1 is equal to z2" << endl;
    else
        cout << "z1 isn't equal to z2" << endl;
    cout << "\n\n";
    
    return 0;
}