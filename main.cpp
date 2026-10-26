// James Ellis
// Math 1900
// Homework 7

#include <iostream>

using namespace std;
int main() {
	int x, y, z,a,b,c;
	z = 0; // counter for number of questions asked
	c = 0; // counter for number of correct answers
	while (z < 5) { // loop to ask 5 questions
		cout << "Enter 2 integers: ";
		cin >> x >> y;
		a = x * y; // calculate the product of x and y
		cout << "what is b " << endl;
		cin >> b;
		if (b == a) { // check if the answer is correct
			cout << "Correct!" << endl;
			c++; // increment the correct answer counter
		}
		else { // if the answer is incorrect
			cout << "Incorrect, please try again." << endl;
		}
		z++; // increment the question counter
	}
	cout << "You got " << c << " correct out of 5." << endl;

	return 0;
}