// James Ellis
// Math 1900
// Homework 5

#include <iostream>
#include<cmath>

using namespace std;

int main() {
	double resistor_rating;
	double measured_resistance;

	cout << "Please enter the rated resistance of the resistor: " << endl;
	cin >> resistor_rating;
	cout << "Please enter the measured resistance of the resistor: " << endl;
	cin >> measured_resistance;
	
	if (measured_resistance >= ((resistor_rating)-(.05 * resistor_rating)) && measured_resistance <=((.05 * resistor_rating) + (resistor_rating))) {
			cout << "The measured resistance is within the tolerance range." << endl;
	}
	else if (measured_resistance > ((.05 * resistor_rating) + (resistor_rating))) {
		cout << "The measured resistance is too high and outside the tolerance range." << endl;
	}
	else if (measured_resistance < ((resistor_rating)-(.05 * resistor_rating))) {
		cout << "The measured resistance is too low and outside the tolerance range." << endl;
	}



	return 0;
}