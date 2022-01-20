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
<<<<<<< HEAD
=======

>>>>>>> 473694388e1478050c29b899966e71c40fe365c8
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

<<<<<<< HEAD
template <typename T>
=======
>>>>>>> 473694388e1478050c29b899966e71c40fe365c8
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
