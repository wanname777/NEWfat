//
// Created by zhang on 2020/9/1.
//

#ifndef NEWFAT_COMPLEX_H
#define NEWFAT_COMPLEX_H


class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0);

    Complex operator+(Complex c2);

    Complex operator-(Complex c2);

    double getReal() const;

    double getImag() const;

    Complex operator++();

    Complex operator++(int);

    Complex operator=(Complex c2);
};


#endif //NEWFAT_COMPLEX_H
