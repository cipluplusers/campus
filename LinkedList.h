#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>


using namespace std;


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

    
    void addToPosition(T value, int position)
    {
        Node<T>* node = new Node<T>;

        node->data = value;
        if (head == nullptr)
        {
            node->next = node;
            node->prev = node;
            head = node;
        }
        else
        {
            Node<T>* p = head;

            for (int i = position; i > 1; i--) { p = p->next; }
            p->prev->next = node;
            node->prev = p->prev;
            node->next = p;
            p->prev = node;
        }
    }
    

    void deleteFromPosition(int position)
    {
        if (head == nullptr)
        {
            cout << "\nList is empty\n\n";
            //return 0;
        }

        if (head == head->next)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            Node<T>* a = head;
            
            for (int i = position; i > 1; i--) { a = a->next; }
            if (a == head) { head = a->next; }
            
            a->prev->next = a->next;
            a->next->prev = a->prev;
            
            delete a;
        }
    }

    
    void printList()
    {
        if (head == nullptr) { cout << "\nList is empty\n\n"; }
        else
        {
            Node<T>* current = head;

            cout << "\nList: ";
            do
            {
                cout << current->data << " ";
                current = current->next;
            } while (current != head);
            
            cout << "\n\n";
        }
    }
    

	void pushBack(T value)
    {
        Node<T>* node = new Node<T>;
        Node<T>* last = head;
        node->data = value;
        node->next = nullptr;

        if (head == nullptr)
        {
            node->prev = nullptr;
            head = node;
            return;
        }
        
        while (last->next != nullptr) { last = last->next; }

        last->next = node;
        node->prev = last;
    }
    

	void pushFront(T value)
    {
        Node<T>* node = new Node<T>;
        node->data = value;
        node->next = head;
        node->prev = nullptr;

        if (head != nullptr) { head->prev = node; }

        head = node;
    }
};


#endif
