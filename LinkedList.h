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

    void addToPosition(T value, int position);

    int deleteFromPosition(int position);
    
    void printList();

	void pushBack(T value);

	void pushFront(T value);
};


#endif
