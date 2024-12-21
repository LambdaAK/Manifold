#include "Complex.hpp"
#include <cmath> // For std::sqrt

// Constructor
Complex::Complex(double r, double i) : real(r), imag(i) {}

// Getters
double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}

// Arithmetic operators
Complex Complex::operator+(const Complex& other) const {
    return {real + other.real, imag + other.imag};
}

Complex Complex::operator-(const Complex& other) const {
    return {real - other.real, imag - other.imag};
}

Complex Complex::operator*(const Complex& other) const {
    return {
        real * other.real - imag * other.imag,
        real * other.imag + imag * other.real
    };
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    return {
        (real * other.real + imag * other.imag) / denominator,
        (imag * other.real - real * other.imag) / denominator
    };
}

// Magnitude
double Complex::magnitude() const {
    return std::sqrt(real * real + imag * imag);
}

// Conjugate
Complex Complex::conjugate() const {
    return {real, -imag};
}

// Overload << operator
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real;
    if (c.imag >= 0) {
        os << " + " << c.imag << "i";
    } else {
        os << " - " << -c.imag << "i";
    }
    return os;
}
