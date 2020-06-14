#include <iostream>
#include "doublylinkedlist.h"

using namespace std;

template <class T>
Node <T>* DoublyLinkedList<T>::Find(T findData)
{
	//If the size is not 0
	if (linkSize != 0)
	{
		Node <T>* newPtr = head;
		while (newPtr != nullptr && newPtr->data != findData)
		{
			newPtr = newPtr->next;
		}
		cout << "Found: " << newPtr->data;
		return newPtr;
	}
	else
	{
		cout << "That's not in the list";
		return 0;
	}
}

//Insert Node
template <class T>

//Insert
void DoublyLinkedList<T>::Insert(T newData)
{
	Node <T>* newPtr = new Node <T>(newData);
	//
	if (linkSize == 0)
	{
		tail = newPtr;
		head = newPtr;
		tail->next = NULL;
		head->prev = NULL;
	}
	else
	{
		newPtr->prev = tail;
		tail->next = newPtr;
		tail = newPtr;
		tail->next = NULL;
	}
	linkSize++;
}

template <class T>
//Delete
void DoublyLinkedList<T>::Delete(T deleteData)
{
	Node <T>* newPtr = head;
	//Search
	while (newPtr->data != deleteData)
	{
		newPtr = newPtr->next;
	}
	//Tail
	if (newPtr == tail)
	{
		newPtr->prev = tail;
		tail->next = NULL;
		tail->prev = newPtr->prev->prev;

		linkSize--;
	}
	//Head
	else if (newPtr == head)
	{
		newPtr->next = head;
		head->prev = NULL;
		head->next = newPtr->next->next;
		linkSize--;
	}
	//Middle
	else
	{
		newPtr->prev->next = newPtr->next;
		newPtr->next->prev = newPtr->prev;
		linkSize--;
	}
	free(newPtr);
	return;
}

template <class T>
void DoublyLinkedList<T>::Display()
{
	Node <T>* newPtr;
	if (head != NULL)
	{
		newPtr = head;
		while (newPtr != NULL)
		{
			cout << newPtr->data << ", ";
			newPtr = newPtr->next;
		}
	}
	else
	{
		cout << "There's nothing there." << endl;
	}

}
