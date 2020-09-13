#include<iostream>
#include<cmath>
#include <iomanip>
#include "Complex.h"

using namespace std;

int main() {
    double weight, length, division;
    cin >> weight >> length;
    division = weight / pow(length, 2);
    cout << fixed << setprecision(1) << division << endl;
    if (division > 25) cout << "PANG" << endl;
    else cout << "Hai Xing" << endl;

    Complex a;
    Complex b(1.1, 2.2);
    Complex c(2.2, 3.3);
    cout << b.getReal() << " " << b.getImag() << endl;
    cout << c.getReal() << " " << c.getImag() << endl;
    cout << a.getReal() << " " << a.getImag() << endl;
    a = c + b;
    cout << a.getReal() << " " << a.getImag() << endl;
    Complex d;
    d = a++;
    cout << d.getReal() << " " << d.getImag() << endl;
    d = ++a;
    cout << d.getReal() << " " << d.getImag() << endl;
    b = d;
    cout << b.getReal() << " " << b.getImag() << endl;


}