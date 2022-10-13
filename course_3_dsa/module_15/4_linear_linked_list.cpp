#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->next != NULL)
            cout << " -> ";
        n = n->next;
    }
    cout << "\n"
         << "\n";
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->value = 1;
    second->value = 2;
    third->value = 3;
    fourth->value = 4;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    display(head);

    return 0;
}