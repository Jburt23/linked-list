//Justin Burt
// CSC 2144-------Period CN1
//March 29, 2018--Spring 2018


#pragma once
#include<iostream>

using namespace std;

class NumberList
{
public:
	NumberList() { head = nullptr; }
	//~NumberList();
	void add(double number);
	void remove(double number);
	void displayList() const;
protected:                              // must be protected so a derivation of this class can use it
	struct ListNode                     // namely SortedNumberList class
	{
		double value;
		ListNode *next;
		ListNode(double value1, ListNode *next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};
	ListNode *head;
};