#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
class Node
{
public:
	T data;
	Node* next;
	Node* prev;
};

template <class T>

class LinkedList
{
public:

	Node<T>* head;


public:

	LinkedList()
	{
		head = nullptr;
	}

    void addToPosition(T value, T position);

    int deleteFromPosition(T position);
    

    void printList();
    
};


#endif
