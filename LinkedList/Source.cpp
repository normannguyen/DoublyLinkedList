#include <iostream>
#include "doublylinkedlist.h"
#include "Functions.h"

//Standard Library
using namespace std;


	int main()
	{
		int choice = 0;
		int value = 0;
		DoublyLinkedList<int> List = DoublyLinkedList<int>();
		do
		{
			cout << "\n**************\n";
			cout << "\n1. Find";
			cout << "\n2. Insert";
			cout << "\n3. Delete";
			cout << "\n4. Display";
			cout << "\n\nPlease enter the # listed above: ";
			cin >> choice;
			switch (choice)
			{
				//Find
				case 1:
					cout << "Enter the value you wanted to find: ";
					cin >> value;
					List.Find(value);
					break;
				//Insert
				case 2:
				{
					cout << "Enter the value you wanted to add: ";
					cin >> value;
					List.Insert(value);
					Node <int>* temp = List.head;
					while (temp != nullptr)
					{
						cout << "Data: " << temp->data << endl;
						temp = temp->next;
					}
					break;
				}
					
				case 3:
				{
					cout << "Enter the value you wanted to delete: ";
					cin >> value;
					List.Delete(value);
					Node <int>* temp = List.head;
					break;
				}
				//Display
				case 4:
				{
					List.Display();
				}
			}
		} while (choice != 99);
		system("pause");
		return 0;
}
