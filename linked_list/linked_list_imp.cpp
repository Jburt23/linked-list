//Justin Burt
// CSC 2144-------Period CN1
//March 29, 2018--Spring 2018

#include "linked_list.h"

using namespace std;

void NumberList::add(double number)
{
	ListNode *nodePtr, *previousNodePtr;

	if (head == nullptr || head->value >= number)
		head = new ListNode(number, head);          // a new node goes at the beginning of the list

	else
	{
		previousNodePtr = head;
		nodePtr = head->next;
		//finding the insertion pt with the while loop
		while (nodePtr != nullptr && nodePtr->value < number)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		// insert the new node just before nodePtr
		previousNodePtr->next = new ListNode(number, nodePtr);
	}
}

void NumberList::displayList() const
{
	ListNode *nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << "     ";
		nodePtr = nodePtr->next;
	}
}

void NumberList::remove(double number)
{
	ListNode *nodePtr, *previousNodePtr = NULL;

	if (!head) return; // if list is empty do nothing

	if (head->value == number) // check to see if the first node is the one to delete
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		nodePtr = head;    // initialize nodePtr to the head of the list

		while (nodePtr != nullptr && nodePtr->value != number)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		// link the previous node to the node after nodePtr, then delete nodePtr
		if (nodePtr)
		{
			previousNodePtr->next = nodePtr->next;
			delete nodePtr;
		}
	}
}


/*NumberList::~NumberList()
{
	ListNode *nodePtr = head;
	while (nodePtr != nullptr)
	{
		ListNode *garbage = nodePtr;
		nodePtr = nodePtr->next;
		delete garbage;
	}
	head = NULL;
}*/

