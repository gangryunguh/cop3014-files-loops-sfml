//
// Created by Gang-Ryung Uh on 6/2/18.
//
//     Prints out cos(x) using Taylor expansion.
//
//     cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...
//
// Note:  sin(pi/6) = sin(0.523598775598299...) = 1/2
// We use identity cos(x) = cos(x + 2*PI) to pre-process
// x to be between -2 PI and 2 PI.



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double pi = 3.14159265358979323846;
    double x;

    cout << "type in value for x:" << flush;
    cin >> x;

    x = std::fmod(x,2*pi);

    // compute the Talyor series approximation
    double term = 1.0;  // ith term = x^i / i!
    double sum = 1.0;   // sum of first i terms in taylor series

    for (int i = 1; term != 0.0; i++) {
        term = term * (x / i);
        if (i % 4 == 0)
            sum += term;
        else if (i % 4 == 2)
            sum -= term;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "cosine(" << x << ") = " << sum << endl;
    return 0;
}