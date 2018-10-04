// This program tests for file open errors.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inputFile;
   int number;

   // Open the file.
   inputFile.open("BadListOfNumbers.txt");

   // If the file successfully opened,
   //    print all the numbers in the file
   // otherwise, display an error message.



   return 0;
}