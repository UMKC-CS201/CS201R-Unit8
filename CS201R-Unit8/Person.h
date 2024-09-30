#pragma once
#include <string>
using namespace std;

class Person {
private:
	char type;
	string lname;
	string fname;
	int age;

public:
	//constructor: default
	Person();        

	//constructor: overloaded - write this
	
	//add other accessors/getters 
	string getFName();


	//add other mutators/setters
	void setFName(string f);




	void print();

	// static member to count Persons created
	// where would this be updated?
	static int totalPeople;
};
