//Justin Burt
// CSC 2144-------Period CN1
//March 29, 2018--Spring 2018


#include<iostream>
#include "linked_list.h"

using namespace std;

int main()
{
	NumberList list;
	list.add(2.5);
	list.add(7.9);
	list.add(12.6);
	list.displayList();
	cout << endl;

	list.add(10.5);
	list.displayList();
	cout << endl << endl;

	cout << "Now removing the value in the midle. \n";
	list.remove(7.9);
	cout << "Here are the values left. \n";
	list.displayList();
	cout << "\n\n";

	cout << "Now removing the last value.\n";
	list.remove(12.6);
	cout << "Here are the values left.\n";
	list.displayList();
	cout << "\n\n";


	cout << "Now removing the last value.\n";
	list.remove(10.5);
	cout << "Here are the values left.\n";
	list.displayList();
	cout << "\n\n";


	cout << "Now removing the only value left.\n";
	list.remove(2.5);
	cout << "Here are the values left.\n";
	list.displayList();
	cout << "\n\n";

	system("PAUSE");
	return 0;
}

//holy shit