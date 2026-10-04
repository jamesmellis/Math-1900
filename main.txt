// James Ellis
// Math 1900
// Homework 5

#include <iostream>

using namespace std;
int main() {
	
	double voltage;
	
	cout << "Please enter the voltage: ";
	cin >> voltage;
	bool isSafe = (voltage <= 5);
	cout << isSafe << endl;
	if (isSafe) {
		cout << "The voltage is safe." << endl;
	}
	else if (voltage > 5) {
		cout << "Warning overvoltage" << endl;
	}

	return 0;
}