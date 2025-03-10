// Programmer: Tyler Matheny date: 1/29/2025
// File: Getting to know you!!.cpp
// Purpose: This code is written for getting to know the user and for them to get to know me.

#include <iostream>
#include <string>

using namespace std;


int main() {
	string color;

	cout << "What is your favorite color?" << endl;
	getline(cin, color);
	if (color == "purple") {
		cout << "Awesome!! Thats mine too!" << endl;
	}
	else if (color == "Purple") {
		cout << "Awesome!! Thats mine too!" << endl;
	}
	else {
		cout << "Oh nice! Mine's purple, " << color << " is good too!" << endl;
	}

	string animal;

	cout << "What are your favorite animals?" << endl;
	getline(cin, animal);
	if (animal == "monkeys") {
		cout << "That's cool!! I love monkeys too!" << endl;
	}
	else if (animal == "Monkeys") {
		cout << "That's cool!! I love monkeys too!" << endl;
	}
	else {
		cout << "Oh wow! Mine are monkeys, " << animal << " are cool too!" << endl;
	}

	string sport;

	cout << "What is your favorite sport?" << endl;
	getline(cin, sport);
	if (sport == "swimming") {
		cout << "That's awesome!! I love swimming too!" << endl;
	}
	else if (sport == "Swimming") {
		cout << "That's awesome!! I love swimming too!" << endl;
	}
	else {
		cout << "Cool! Mine is swimming, " << sport << " is fun too!" << endl;
	}

	string band;

	cout << "Who is your favorite band or artist?" << endl;
	getline(cin, band);
	if (band == "metallica") {
		cout << "That's awesome!! Thats mine too!" << endl;
	}
	else if (band == "Metallica") {
		cout << "That's awesome!!Thats mine too!" << endl;
	}
	else {
		cout << "Cool! Mine is Metallica, " << band << " is great too!" << endl;
	}

	string food;

	cout << "What is your favorite food?" << endl;
	getline(cin, food);

	if (food == "Steak") {
		cout << "Mmmmh, thats mine too!!" << endl;
	}
	else if (food == "steak") {
		cout << "Mmmmh, thats mine too!!" << endl;
	}
	else {
		cout << "Mmmmh, " << food << " is delicious! Mine is steak!" << endl;
	}

	cout << "" << endl;
	cout << "It was great to get to know you!" << endl;
	return 0;
	
}

