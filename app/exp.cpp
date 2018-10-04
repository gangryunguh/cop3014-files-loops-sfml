//
// Created by Gang-Ryung Uh on 6/2/18.
//
//     Prints out e^x using Taylor expansion.
//
//     e^x = 1 + x + x^2/2! + x^3/3! + x^4/4! ...
//
// e^0  = 1
// e^1  = 2.7182...
// e^10 = 22026.4657...
// e^-10 = 0.000045399...

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x;

    cout << "type in the exponent value of exp: " << flush;
    cin >> x;

    cout << fixed << showpoint << setprecision(6);
    cout << "cmath exp( " << x << " ) = " << std::exp(x) << endl;

    double term = 1.0;
    double sum = 1.0;
    for (int i=1; term != 0.0; i++) {

        // implement the formula given in line 6


    }
    cout << "my exp( " << x << " ) = " << sum << endl;

    return 0;
}

