#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;


struct Node
{
	int data;
	Node* next;
	Node* prev;
};

class LinkedList
{
public:

	Node* head;

public:

	LinkedList()
	{
		head = nullptr;
	}

	void addToPosition(int value, int position)
	{
		Node* node = new Node;
		node->data = value;
		if (head == nullptr)
		{
			node->next = node;
			node->prev = node;
			head = node;
		}
		else
		{
			Node* p = head;
			for (int i = position; i > 1; i--)
			{
				p = p->next;
			}
			p->prev->next = node;
			node->prev = p->prev;
			node->next = p;
			p->prev = node;
		}
	}


	int deleteFromPosition(int position)
	{
		if (head == nullptr)
		{
			cout << "\nСписок пуст\n\n";
			return 0;
		}

		if (head == head->next)
		{
			delete head;
			head = nullptr;
		}
		else
		{
			Node* a = head;
			for (int i = position; i > 1; i--) a = a->next;
			if (a == head) head = a->next;
			a->prev->next = a->next;
			a->next->prev = a->prev;
			delete a;
		}
	}


	void printList()
	{
		if (head == nullptr) cout << "\nСписок пуст\n\n";
		else
		{
			Node* current = head;
			cout << "\nЭлементы списка: ";
			do
			{
				cout << current->data << " ";
				current = current->next;
			} while (current != head);
			cout << "\n\n";
		}
	}


};


#endif