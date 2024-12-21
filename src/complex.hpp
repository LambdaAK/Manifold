#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>

class Complex {
private:
    double real, imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0);

    // Getters
    double getReal() const;
    double getImag() const;

    // Arithmetic operators
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // Magnitude
    double magnitude() const;

    // Conjugate
    Complex conjugate() const;

    // Overload << operator
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

#endif // COMPLEX_HPP
