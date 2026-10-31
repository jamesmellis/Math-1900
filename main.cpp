// James Ellis
// Math 1900
// Homework 8 problem 3

#include<iostream>
#include<string>
using namespace std;

string attempt;
string secret = "blue bird"; // declaring a string and setting it equal to the chosen phrase


string checkPassphrase(string attempt) { // function definiton
	if (attempt == secret) // checks the entered phrase against the saved one
	{
		return "correct";
	}
	else
	{
		return "incorrect";
	}
}


int main() {
	cout << "Enter the passphrase: ";
	getline(cin, attempt); // captures the input and saves it to attempt
	cout << checkPassphrase(attempt) << endl; // calls on the function entering in the phrase that the user entered

	return 0;
}