#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void reverseListPrint(Node *head, int i)
{
    if (head == NULL)
    {
        return;
    }

    reverseListPrint(head->next, i + 1);
    cout << head->value;
    if (i != 0)
    {
        cout << " -> ";
    }
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->next != NULL)
        {
            cout << " -> ";
        }
        n = n->next;
    }

    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;

    int value;
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2: Insertion at Tail" << endl
         << "Choice 0: Exit" << endl
         << endl;
    cout << "Next Choice: ";
    int choice;
    cin >> choice;

    while (choice != 0)
    {
        cout << "Enter the value: ";
        cin >> value;
        switch (choice)
        {
        case 1:
            insertAtHead(head, value);
            break;
        case 2:
            insertAtTail(head, value);
            break;
        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    display(head);

    reverseListPrint(head, 0);

    return 0;
}