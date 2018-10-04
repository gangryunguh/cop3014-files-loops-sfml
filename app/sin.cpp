//
// Created by Gang-Ryung Uh on 6/2/18.
//
//     Prints out sin(x) using Taylor expansion.
//
//     sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
//
// Note:  sin(pi/6) = sin(0.523598775598299...) = 1/2
// We use identity sin(x) = sin(x + 2*PI) to pre-process
// x to be between -2 PI and 2 PI.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   const double pi = 3.14159265358979323846;
   double x;

   cout << "type in value (radian) for sin function: " << flush;
   cin >> x;

   x = std::fmod(x,2*pi);  // in C++ % is defined only for int data type

   // compute the Taylor series approximation
   double term = 1.0;  // ith term = x^i / i!
   double sum = 0.0;   // sum of first i terms in taylor series

   for (int i = 1; term != 0.0; i++) {

      // implement the sin(x) formula in line 6


   }

   cout << fixed << showpoint << setprecision(2);
   cout << "sin(" << x << ") = " << sum << endl;
   return 0;
}