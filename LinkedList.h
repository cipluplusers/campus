#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;

template <typename T>

struct Node
{
	T data;
	Node* next;
	Node* prev;
};

template <class T>

class LinkedList
{
public:

	Node* head;

public:

	LinkedList()
	{
		head = nullptr;
	}

<<<<<<< HEAD
    void addToPosition(T value, T position);
=======
    void addToPosition(T value, int position);
>>>>>>> 72daaa1ee166d539f19067566ed7d188b0e2820c


    int deleteFromPosition(T position);
    

    void printList();
    
};


#endif
