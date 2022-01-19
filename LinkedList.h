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

    void addToPosition(T value, T position);

    int deleteFromPosition(T position);
    

    void printList();
    
};


#endif
