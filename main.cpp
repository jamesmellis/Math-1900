// James Ellis
// Homework 9 problem 3
// Math 1900

#include <iostream>
using namespace std;

double orderTotal(const double price[], const int quantities[], int SIZE) { // 1st Function definition to calculate the total order cost
	double total = 0.0; // Initialize total to 0
	for (int i = 0; i < SIZE; i++) { // Loop through each item in the order
		total += price[i] * quantities[i]; // Add the cost of each item to the total
	}
	return total; // Return the total order cost
}

int main() {
	const int SIZE = 3; // 2nd Define the size of the arrays
	double price[SIZE] = { 2.50, 4.00, 1.25 }; // 3rd values, the price array with the prices of each item
	int quantities[SIZE] = { 4, 2, 8 }; // 3rd values, the quantities array with the quantities of each item
	for (int i = 0; i < SIZE; i++) { // 4th Loop through each item in the order
		cout << "Quantity: " << quantities[i] << " Price: $" << price[i] << " Line cost: $" << price[i] * quantities[i] << endl;
	}
	//double total = orderTotal(price, quantities, SIZE); // 5th Call on the orderTotal function to calculate the total order cost
	cout << "Total order cost: $" << orderTotal << endl; // Output the total order cost

	return 0;
}