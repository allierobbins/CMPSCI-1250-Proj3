/*
 * project3.cpp
 *
 *  Created on: Sep 11, 2016
 *      Author: Alexandria Robbins
 */

// This is Project 3 by Allie Robbins
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//variables
	string fullName, petName, petType;
	int weight;
	double total, subtotal, weightFee, salesTax;
	double initialCost = 100.00;

	//ask for information
	cout << "Please enter your full name: ";
	getline(cin, fullName);

	cout << "Please enter your pet's name: ";
	getline(cin, petName);

	cout << "Please enter your pet's weight: ";
	cin >> weight;

	cout << "Please enter what type of pet you are adopting: ";
	cin >> petType;

	//calculations
	weightFee = weight * 0.5;
	subtotal = initialCost + weightFee;
	salesTax = subtotal * .045;
	total = subtotal + salesTax;

		//calculations test
		//cout << initialCost << endl;
		//cout << weightFee << endl;
		//cout << subtotal << endl;
		//cout << salesTax << endl;
		//cout <<total << endl;

	//Final output
	cout << "Thank you for asking about adopting a pet at our animal hospital!" << endl;
	cout << fullName << ", the cost to adopt your " << petType << " " << petName << " is as follows: " << endl;


	cout << "-------------------" << endl;
	cout << setprecision(2) << fixed;
	cout << "Initial Cost: $" << setw(6) << initialCost << endl;
	cout << "Weight Fee:   $" << setw(6) << weightFee << endl;
	cout << "-------------------" << endl;
	cout << "Subtotal:     $" << setw(6) << subtotal << endl;
	cout << "Tax:          $" << setw(6) << salesTax << endl;
	cout << "-------------------" << endl;
	cout << "Total:        $" << setw(6) << total << endl;

	return 0;
}



