// James Ellis
// Math 1900
// Homework 6

#include <iostream>

using namespace std;

int main() {
	int secretNumber;
	
cout << "Player one, enter a secret number between 1 and 10: ";
cin >> secretNumber;
	
int guess;
cout << "Player two, guess the secret number: ";
int attempts = 1;
cin >> guess;
 
while (guess > 10 || guess < 1) {
	cout << "Sorry enter a number between 1 and 10: ";
	cin >> guess;
	attempts++;
}
while (guess != secretNumber) {
	cout << "Sorry, that is not the secret number. Try again: ";
	cin >> guess;
	attempts++;

		if (guess == secretNumber) {
			cout << "Congratulations! You guessed the secret number!" << endl;
			cout << "It took you " << attempts << " attempts to guess the secret number." << endl;
		}
	}

	return 0;
}