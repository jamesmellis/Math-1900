// James Ellis
// Math 1900 
// Homework 8 problem 1

#include <iostream>

using namespace std;	

double produce(double a, double b); // Function prototype
int i = 0; // Global variable declaration
double a, b, result; // Variable declaration

int main() {
	while (i < 5) { // Loop to get input and calculate product 5 times
		cout << "Enter two numbers: ";
		cin >> a >> b;
		result = produce(a, b); // Function call
		cout << "The product of is: " << result << endl;
		i++; // Increment the counter
	}
	return 0;
}
	double produce(double a, double b)
	{ return a * b;  // Function definition
	}