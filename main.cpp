// James Ellis
// Math 1900
// Homework 6

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	string password;
	cout << "Please enter a 5-character password: " << endl;
	cin >> password;
	int attempts = 0;

	string guess;
	cout << "You have 3 attempts to enter the correct password." << endl;
	cin >> guess;
	attempts++;
	
	while (guess != password && attempts < 3) {
		cout << "Incorrect password, try again." << endl;
		cin >> guess;
		attempts++;
	}

	if (guess == password) {
		cout << "Password correct :) " << endl;
	} else {
		cout << "You have exceeded the maximum number of attempts, your account has been locked." << endl;
	}
	ofstream fout("data.txt");
	fout << "Password entered: " << password << endl;
	fout << "Number of attempts: " << attempts << endl;
	fout.close();
	return 0;
}