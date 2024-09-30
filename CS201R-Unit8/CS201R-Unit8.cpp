// CS201Wk8PersonClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"
#include "Functions.h"
using namespace std;

//add Static Member initialization

int main()
{
    //create a vector of Person type
    vector<Person> thePeople;
    //create two persons & add to vector

    // read the file & load into vector of Personal type
    readFile(thePeople);

    // print the vector
    printVector(thePeople);


}