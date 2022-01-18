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

    void addToPosition(int value, int position);


    int deleteFromPosition(int position);
    

    void printList();
    
};


#endif
