// James Ellis
// Math 1900
// Homework 8 problem 2

#include <iostream>
using namespace std;

const double PI = 3.14159; // stating my constant
double radius,height,volume; // stating my doubles
double cylinderVolume(double radius, double height) { // this is my function that will return the volume
	volume = PI * radius * radius * height; // this is the formula for volume of a cylinder
	return volume;
}
int main() {
	cout << "Enter the radius of the cylinder: ";
	cin >> radius; // take in the radius of the cylinder
	cout << "Enter the height of the cylinder: ";
	cin >> height; // take in the height of the cylinder
	volume = cylinderVolume(radius, height); // plugs in the known radius and height into the function returning the volume and setting that figure to = the double volume
	cout << "The volume of the cylinder is: " << volume << endl; 

	return 0;
}