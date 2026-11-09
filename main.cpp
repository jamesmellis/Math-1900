// James Ellis
// Homework 9 problem 1
// Math 1900

#include <iostream>
using namespace std;

const int SIZE = 5; // 1st Define the size of the array
int numbers[SIZE] = { 0, 10, 2, 4, 10 }; // 2nd set the array with 5 elements

int main() {
	for (int i = 0; i < SIZE; i++) { // 3rd setup 1st Loop through the array and print each element all on one line
		cout << numbers[i] << " "; // did not use endl because it would print each number on a new line insead added a space and keep them on the same line
    }
	cout << endl; // added endl to move to the next line for the next output after the loop is done
	for (int i = 0; i < SIZE; i++) { // 4th setup 2nd Loop through the array and print each element on its own line
		cout << numbers[i] <<endl;
	}
	for (int i = SIZE - 1; i > -1; i--) { // 5th setup 3rd Loop through the array in reverse order and print each element all on one line
		cout << numbers[i] << " "; // added a space and keeping the numbers on the same line
	}
	cout << endl; // added endl to move to the next line for the next output after the loop is done

    return 0;
}