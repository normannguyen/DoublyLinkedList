#pragma once

#include <iostream>

//Template
template <typename T>

//Nodes
class Node
{
public:
	T data;
	Node* next = nullptr;
	Node* prev = nullptr;
	Node(T newData)
	{
		data = newData;
		next = nullptr;
		prev = nullptr;
	}
};

//Doubly Linked List Class
template <typename T>

class DoublyLinkedList
{
public:
	Node <T>* head;
	Node <T>* tail;
	int linkSize;
	DoublyLinkedList() {
		head = nullptr;
		tail = nullptr;
		linkSize = 0;
	}
	Node<T>* Find(T newData);
	void Insert(T newData);

	void Delete(T deleteData);

	void Display();

};