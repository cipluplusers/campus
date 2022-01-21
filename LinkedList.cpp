#include "LinkedList.h"
#include <iostream>
#include <string>


using namespace std;

template <typename T>
void LinkedList<T>::addToPosition(T value, T position)
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

template <typename T>
int LinkedList<T>::deleteFromPosition(T position)
{
    if (head == nullptr)
    {
        cout << "\nList is empty\n\n";
        return 0;
    }

    if (head == head->next)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node<T>* a = head;
        for (int i = position; i > 1; i--) a = a->next;
        if (a == head) head = a->next;
        a->prev->next = a->next;
        a->next->prev = a->prev;
        delete a;
    }
}


template <typename T>
void LinkedList<T>::printList()

{
    if (head == nullptr) cout << "\nList is empty\n\n";
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

template <typename T>

void LinkedList<T>::pushBack(T value)
{
    Node<T>* node = new Node;
    Node<T>* last = head;
    node->data = value;

    node->next = nullptr;

    if (head = nullptr)
    {
        node->prev = nullptr;
        head = node;
        return;
    }
    while (last->next != nullptr)
    {
        last = last->next;
    }

    last->next = node;
    node->prev = last;
}

template <typename T>

void LinkedList<T>::pushFront(T value)
{
    Node<T>* node = new Node<T>;
    node->data = value;

    node->next = head;
    node->prev = nullptr;

    if (head != nullptr)
    {
        head->prev = node;
    }

    head = node;
}

template <typename T>
int LinkedList::getPositionOfElement(T element)
{
    Node<T>* node = new Node<T>;
    node->data = element;
    
    int position = 0;
    
    if (head == nullptr)
    {
        return 0;
    }
    
    while (head->data == node->data)
    {
        head = head->next;
        position ++;
    }
    return position;
}
