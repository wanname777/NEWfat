//
// Created by zhang on 2020/9/1.
//

#include "Complex.h"

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex Complex::operator+(Complex c2) {
    real += c2.real;
    imag += c2.imag;
    return {real, imag};
}

Complex Complex::operator-(Complex c2) {
    real -= c2.real;
    imag -= c2.imag;
    return {real, imag};
}

double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}

Complex Complex::operator++() {
    double temp_real;
    temp_real = ++real;
    return {temp_real, imag};
}

Complex Complex::operator++(int) {
    double temp_real;
    temp_real = real++;
    return {temp_real, imag};
}

Complex Complex::operator=(Complex c2) {
    real = c2.real;
    imag = c2.imag;
    return {real, imag};
}