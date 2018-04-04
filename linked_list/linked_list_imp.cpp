//Justin Burt
// CSC 2144-------Period CN1
//March 29, 2018--Spring 2018

#include "linked_list.h"
#include "SortedNumberList.h"

using namespace std;

void NumberList::add(double number)
{
	if (head == nullptr)
		head = new ListNode(number);
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr->next != nullptr)
			nodePtr = nodePtr->next;
		nodePtr->next = new ListNode(number);
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

void SortedNumberList::add(double number)
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

