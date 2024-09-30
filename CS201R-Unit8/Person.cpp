#include <iostream>
#include <iomanip>
#include <string>

#include "Person.h"

//default constructor
Person::Person() {
	type = 'P';
	lname = " ";
	fname = " ";
	age = 0;
}

//add overloaded constructor


void  Person::setFName(string f) {
	fname = f;
}

string Person::getFName() {
	return fname;
}

void Person::print() {
	cout << "Name: " << fname << " " << lname << endl;
	cout << "Age:  " << age << endl << endl;
}