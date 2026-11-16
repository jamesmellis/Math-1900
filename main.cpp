// James Ellis
// Math 1900
// Homework 10 problem 2

#include <iostream>

using namespace std;

const int students = 2; // Number of students
const int quizzes = 3; // Number of quizzes
double rowAverage(double scores[students][quizzes], int row); // Function for calculating the average score of a student

int main() {
	double scores[students][quizzes]; // Declare a 2D array to store the scores of each student for each quiz
	for (int i = 0; i < students; i++) { // Loop through each student
		for (int j = 0; j < quizzes; j++) { // Loop through each quiz
			cout << "Enter score for student " << i + 1 << ", quiz " << j + 1 << ": "; // Prompt to enter the score for the current student and quiz
			cin >> scores[i][j]; // Store the score in the 2D array
		}
	}
	cout << endl; // Print a blank line to look better
	for (int i = 0; i < students; i++) { // Loop through each student
		cout << "Student " << i + 1 << " average: " << rowAverage(scores, i) << endl; // Call the rowAverage function to calculate and print the average score for the current student
	}
	cout << endl; // Print a blank line to look better
	cout << "Quiz averages: " << endl; 
	for (int j = 0; j < quizzes; j++) { // Loop through each quiz
		double total = 0; // set a variable to store the total score for the current quiz
		for (int i = 0; i < students; i++) { // Loop through each student
			total += scores[i][j]; // Add the score of the current student for the current quiz to the total
		}
		cout << "Quiz " << j + 1 << " average: " << total / students << endl; // Calculate and print the average score for the current quiz
	}
	return 0;
}
double rowAverage(double scores[students][quizzes], int row) // Function to calculate the average score of a student
	{
	double total = 0; // set a variable to store the total score for the current student
	for (int j = 0; j < quizzes; j++) { // Loop through each quiz
		total += scores[row][j]; // Add the score of the current student for the current quiz to the total
	}
	return total / quizzes; // Calculate and return the average score for the current student
}