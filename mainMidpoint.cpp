// James Ellis
// Math 1900 Homework 4

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {
	
	string name;
	cout << "Please enter your name: ";
	getline(cin, name);

	int x1, y1, x2, y2;
	cout << "We will be getting the mid-point of two courdinates press enter to continue" << endl;
	cin.ignore();
	
	cout << "Please enter the first coordinate x1" << endl;
	cin >> x1;
	cout << "Please enter the first coordinate y1" << endl;
	cin >> y1;
	cout << "Please enter the second coordinate x2" << endl;
	cin >> x2;
	cout << "Please enter the second coordinate y2" << endl;
	cin >> y2;


	
	double mid_x = (x1 + x2) / 2.0;
	double mid_y = (y1 + y2) / 2.0;
	cout << "name: " << name << endl;
	cout << "X1= (" << x1 << ")" << endl;
	cout << "Y1= (" << y1 << ")" << endl;
	cout << "X2= (" << x2 << ")" << endl;
	cout << "Y2= (" << y2 << ")" << endl;
	cout << "The midpoint is: (" << mid_x << ", " << mid_y << ")" << endl;

	return 0;
}