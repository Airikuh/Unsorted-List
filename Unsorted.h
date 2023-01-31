///Unsorted.h Header File For Class
#pragma once

#define MAX_ITEMS 10

using namespace std;

typedef char ItemType;

class UnsortedList {
	//Private Attributes
	int length;
	ItemType values[MAX_ITEMS];
	int currentPos;

	//Public Methods
public:
	//Default Constructor
	UnsortedList() { length = 0; currentPos = -1; }

	//Transformer Methods to Change Values
	void MakeEmpty();
	void InsertItem(ItemType);
	void DeleteItem(ItemType);

	//Observer Methods to View Values
	bool IsFull();
	int LengthIs();
	void RetrieveItem(ItemType&, bool&);

	//Iterator Methods to Walk Through List Items
	void ResetList();
	void GetNextItem(ItemType&);

	//Print Method to Print out Elements
	void PrintElement();


};
