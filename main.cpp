// James Ellis
// Math 1900
// Homework 10 problem 3

#include <iostream>
using namespace std;

int main() {
	const int size = 10; // size of the plot
	char plot[size][size]; // 2D array to represent the plot
	for (int i = 0; i < size; i++) { // loop for the plot i and increase it by 1 each time it loops
		for (int j = 0; j < size; j++) { // loop for the plot j and increase it by 1 each time it loops
			plot[i][j] = '.'; // set the plot with dots
		}
	}
	cout << "Original plot:" << endl;
	for (int i = 0; i < size; i++) { // loop for the plot i and increase it by 1 each time it loops
		for (int j = 0; j < size; j++) { // loop for the plot j and increase it by 1 each time it loops
			cout << plot[i][j] << " ";
		}
		cout << endl; // print a new line after the plot
	}
	int x, y; // variables to hold the coordinates
	cout << endl;
	cout << "Enter x coordinate (0-9): "; // prompt the user to enter the x coordinate
	cin >> x;
	cout << "Enter y coordinate (0-9): "; // prompt the user to enter the y coordinate
	cin >> y;
	plot[y][x] = '*'; // set the plot at the coordinates to an asterisk
	cout << endl;
	cout << "Updated plot:" << endl;
	for (int i = 0; i < size; i++) { // loop for the plot i and increase it by 1 each time it loops
		for (int j = 0; j < size; j++) { // loop for the plot j and increase it by 1 each time it loops
			cout << plot[i][j] << " ";
		}
		cout << endl; // print a new line after the plot
	}
	return 0;

}