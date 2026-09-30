// James Ellis
// Math 1900 Homework 4

#include<iostream>
#include<string>

using namespace std;
int main() {
	cout << "Welcome ....\n";

	char f_initial;
	cout << "enter your first initial: ";
	cin >> f_initial;

	string l_name;
	cout << "Enter your last name: ";
	cin >> l_name;

	int fav_number;
	cout << "Enter your favorite number: ";	
	cin >> fav_number;

	string UserName;
	UserName = f_initial+l_name+to_string(fav_number);


	cout << "Your username is: " << UserName << endl;

	return 0;
}