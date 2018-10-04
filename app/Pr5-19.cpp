// This program reads data from a file.
#include <iostream>

#include <string>
using namespace std;

int main()
{
   // define an inputFile ifstream object

   string name;

   // open file name "Friends.txt" using inputFile


   cout << "Reading data from the file.\n";

   // read 1st name from inputFile

   cout << name << endl;   // Display name 1

   // read 2nd name from inputFile

   cout << name << endl;   // Display name 2


   // read 3rd name from inputFile
   cout << name << endl;   // Display name 3


   // close inputFile


   return 0;
} 