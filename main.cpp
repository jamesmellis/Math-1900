//James Ellis
// Homework 10 problem 1
// Math 1900

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const int Rows = 3; // Number of rows
	const int Cols = 4; // Number of columns

	int numbers[Rows][Cols] = { // Initialize the 2D array
		{ 1, 2, 3, 4 }, // Row 1
		{ 5, 6, 7, 8 }, // Row 2
		{ 9, 10, 11, 12 } // Row 3
	};
	for (int row = 0; row < Rows; ++row) { // Loop through each row
		for (int col = 0; col < Cols; ++col) { // Loop through each column
			cout << setw(8) << numbers[row][col]; // Print the value with spacing of 8 characters
		}
		cout << endl; // Move to the next line after each row
	}
	cout << endl; // Print a blank line to make it look better

	for (int row = 0; row < Rows; ++row) { // Loop through each row
		int total = 0;// sets the total variable to 0
		for (int col = 0; col < Cols; ++col) { // Loop through each column
			total += numbers[row][col]; // Add the value to the total
		}
		cout << "Row " << row + 1 << ": " << total << endl; // Print the total for the row
	}
	cout << endl; // Print a blank line to make it look better

	for (int col = 0; col < Cols; ++col) { // Loop through each column
		int total = 0; // sets the total variable to 0
		for (int row = 0; row < Rows; ++row) { // Loop through each row
			total += numbers[row][col]; // Add the value to the total
		}
		cout << "Column " << col + 1 << ": " << total << endl; // Print the total for the column
	}
	cout << endl; // Print a blank line to make it look better
	return 0;
}