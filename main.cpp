// James Ellis
// Homework 9 problem 2
// Math 1900

#include <iostream>
using namespace std;

const int SIZE = 3; // Number of values to be entered, 1st set the size of the array
double numbers[SIZE]; // Array to hold the values, 2nd create an array to hold the values

int main() {
	cout << "Enter 3 values" << endl; 
	for (int i = 0; i < SIZE; i++) { // Loop to get values from user, 3rd is making the loop to run 3 times to get the values
		cout << "Enter value " << (i + 1) << ": "; // Prompt user for input
		cin >> numbers[i]; // Store input in array
	}
	cout << "\n"; // New line 
	cout << "The values you entered are: " << endl;
	for (int i = 0; i < SIZE; i++) { // Loop to display values, 4th is making the loop to run 3 times to display the values
		cout << numbers[i] << endl; // Display each value
	}

	return 0;
}