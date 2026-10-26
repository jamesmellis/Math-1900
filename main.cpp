// James Ellis
// Math 1900
// Homework 7

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
int main() {
	int z, a, b, c;
	z = 0; // counter for number of questions asked
	c = 0; // counter for number of correct answers
	char response;
	response = 'y'; // initialize response to 'y' to start the quiz

	ofstream fout("Practice.txt"); // open the file in append mode
	
	while (response == 'y' || response == 'Y') {

		while (z < 5) { // loop to ask 5 questions
			srand(time(0)); // seed the random number generator
			int x = rand() % 12 + 1; // generate a random integer between 1 and 12
			int y = rand() % 12 + 1; // generate a random integer between 1 and 12
			cout << x << "x" << y << " = ";
			cin >> a;
			b = x * y; // calculate the product of x and y
			if (b == a) { // check if the answer is correct
				cout << "Correct!" << endl;
				c++; // increment the correct answer counter
			}
			else { // if the answer is incorrect
				cout << "Incorrect, please try again." << endl;
				fout << x << "x" << y << " = " << a << "\n"; // record the incorrect answer in the file
			}
			z++; // increment the question counter
		}
		cout << "You got " << c << " correct out of 5" << endl;
		cout << "Try again Y/N? ";
		cin >> response;
		if (response == 'y' || response == 'Y') {// Restart the quiz
			z = 0; // reset the question counter
			c = 0; // reset the correct answer counter
		}
		else {
			cout << "Thank you for practicing, goodbye!" << endl;
		}
	}
	fout.close(); // close the file

	return 0;
}