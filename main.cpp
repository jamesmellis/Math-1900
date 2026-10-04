// James Ellis
// Math 1900
// Homework 5

#include<iostream>
#include<cmath>
using namespace std;
int main() {

	cout << "Please enter a number grade to convert to a letter grade: ";
	int grade;
	cin >> grade;
	if (grade >= 90 && grade <= 100) {
		cout << "You received a: A" << endl;
	}
	else if (grade >= 80 && grade <= 89) {
		cout << "You received a: B" << endl;
	}
	else if (grade >= 70 && grade <= 79) {
		cout << "You received a: C" << endl;
	}
	else if (grade >= 60 && grade <= 69) {
		cout << "You received a: D" << endl;
	}
	else if (grade < 60) {
		cout << "You received a: F" << endl;
	}
	cout << "With a grade of: " << grade << endl;


	return 0;
}