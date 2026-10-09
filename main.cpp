// James Ellis
// Math 1900
// Homework 6

#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Please enter a five character password: ";
	string password;
	cin >> password;
	int index = 0;
	while (index < 5) {
		cout << "Character " << index << ": " << password[index] << endl;
		index++;
	}

	return 0;
}