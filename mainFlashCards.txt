// James Ellis
// Math 1900 Homework 4

#include <iostream>
#include <string>

using namespace std;
int main() {

	string question_1;
	cout << "Please enter a question: ";
	getline(cin, question_1);
	
	cout << "Enter the answer to your question: ";
	string answer_1;
	getline(cin, answer_1);

	cout << "You entered: " << question_1 << endl;
	cout << "Please press enter to continue..." << endl;
	cin.ignore();
	cout << "The answer is: " << answer_1 << endl;

	return 0;
}