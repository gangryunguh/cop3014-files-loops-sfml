// This program writes user input to a file.
#include<iostream>

using namespace std;

int main()
{
	// define outputFile ofstream object


	int number1, number2, number3;

	// Open an output file "Numbers.txt" using outputFile ofstream


	// Get three numbers from the user.
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter another number: ";
	cin >> number2;
	cout << "One more time. Enter a number: ";
	cin >> number3;


	// Write the numbers to the outputFile in a new line



	cout << "The numbers were saved to a file.\n";

	// Close the file.



	cout << "Done.\n";
	return 0;
}