//Source.cpp Source File For Main Function
#include "Unsorted.h"
#include <fstream>
#include <ostream>
#include <iostream>
#include <vector>

using namespace std;



//Function Definition to Determine the Number of Char Elements in File
int numCharElement(ifstream& x) {
	//Variable Declarations
	char characters;
	int count = 0;

	//While Loop to Cycle Through and Tally Amount of Elements
	while (x >> characters) {
		count++;
	}
	
	//Return Total Number of Characters
	return count;
}

int main() {
	//Variable Declarations
	UnsortedList x;
	ifstream file1;
	ifstream countFile;
	char letter;

	//File Open For Reading
	file1.open("char.dat");

	//File Open For Counting Characters
	countFile.open("char.dat");
	
	//Error Message If File Was Not Opened
	if (!file1) {
		cout << "File Cannot Be Opened For Reading." << endl;
		exit(1);
	}

	//While Loop to Get Information and Insert Into List
	while ((file1 >> letter) && (!x.IsFull())) {
		x.InsertItem(letter);
	}

	//Print All Elements From File
	x.PrintElement();

	//Display Number of Char Elements
	cout << "The Number of Char Elements in the File is: " << numCharElement(countFile) << endl;



	return 0;
}

