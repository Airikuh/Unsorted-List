//Definitions.cpp Source File For UnsortedList Class Definitions
#include "Unsorted.h"
#include <iostream>
#include <ostream>
#include <fstream>

using namespace std;

//Make List Empty Method
void UnsortedList::MakeEmpty() {
	//List Has Length of Zero To Empty
	length = 0;
}

//Insert Item Into List Method
void UnsortedList::InsertItem(ItemType x) {
	//Make Parameter an Element of List
	values[length] = x;

	//Increase Length of List By One
	length++;
}

//Delete Item From List Method
void UnsortedList::DeleteItem(ItemType x) {
	//Variable Declarations
	int location = 0;
	

	//Increment to Next Location in List
	while ((location <= length) && (values[location] != x))
		location++;

	//Move Last Element Into Position Item Was Located
	values[location] = values[length - 1];

	//Decrease Length of List By One
	length--;
}

//Determine if List Is Full Method
bool UnsortedList::IsFull() {
	return (length == MAX_ITEMS);
}

//Length of List Method
int UnsortedList::LengthIs() {
	return length;
}

//Method to Retrieve Item
void UnsortedList::RetrieveItem(ItemType &x, bool &found) {
	//Variable Declarations
	int location = 0;
	bool moreToSearch;
	found = false;

	moreToSearch = (location < length);

	//While Loop to Set to True if Item Found
	while (moreToSearch && !found) {
		for (int i = 0; i < MAX_ITEMS; i++) {
			if (x == values[i]) {
				found = true;
				x = values[location];
				break;
			}

		}
	}

	
	return;

}

//Method to Reset The List
void UnsortedList::ResetList() {
	currentPos = -1;
}

//Method To Get The Next Item In a List
void UnsortedList::GetNextItem(ItemType &x) {
	//Increment Postition to Get Next Item in List
	currentPos++;
	x = values[currentPos];
}

//Method to Print Elements in List
void UnsortedList::PrintElement() {
	cout << "Elements: " << endl;

	//For Loop to Cycle Through Elements for Printing
	for (int i = 0; i < length; i++) {
		cout << values[i] << " " << endl;
	}
}
