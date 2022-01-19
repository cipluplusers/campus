<<<<<<< HEAD
#include "LinkedList.h"
=======
#include "LinkedList.h"

template <typename T>

void Node::addToPosition(T value, int position)
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


int Node::deleteFromPosition(int position)
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
        Node* a = head;
        for (int i = position; i > 1; i--) a = a->next;
        if (a == head) head = a->next;
        a->prev->next = a->next;
        a->next->prev = a->prev;
        delete a;
    }
}


void Node::printList()
{
    if (head == nullptr) cout << "\nList is empty\n\n";
    else
    {
        Node* current = head;
        cout << "\nList: ";
        do
        {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << "\n\n";
    }
}
>>>>>>> 72daaa1ee166d539f19067566ed7d188b0e2820c
