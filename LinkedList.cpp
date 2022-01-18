#include "LinkedList.h"

template <typename T>

void T::addToPosition(int value, int position)
{
    T* node = new T;
    node->data = value;
    if (head == nullptr)
    {
        node->next = node;
        node->prev = node;
        head = node;
    }
    else
    {
        T* p = head;
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

int T::deleteFromPosition(int position)
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
        T* a = head;
        for (int i = position; i > 1; i--) a = a->next;
        if (a == head) head = a->next;
        a->prev->next = a->next;
        a->next->prev = a->prev;
        delete a;
    }
}

template <typename T>

void T::printList()
{
    if (head == nullptr) cout << "\nList is empty\n\n";
    else
    {
        T* current = head;
        cout << "\nList: ";
        do
        {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << "\n\n";
    }
}
