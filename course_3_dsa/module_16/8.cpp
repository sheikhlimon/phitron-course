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

    reverseListPrint(head->next, i+1);
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

    int n;
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2: Insertion at Tail" << endl
         << "Choice 3: Exit" << endl;
    int choice = 2;
    while (choice == 1 || choice == 2)
    {
        cout << "Enter the value: ";
        cin >> n;
        if (choice == 1)
        {
            insertAtHead(head, n);
        }
        else if (choice == 2)
        {
            insertAtTail(head, n);
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    display(head);

    reverseListPrint(head, 0);

    return 0;
}