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

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->value;
        if (head->next != NULL)
        {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}

void skipMdeleteN(Node *head, int M, int N)
{
    Node *current = head, *tail;
    int count;
    while (current)
    {
        for (count = 1; count < M && current != NULL; count++)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            return;
        }

        tail = current->next;
        for (count = 1; count <= N && tail != NULL; count++)
        {
            Node *temp = tail;
            tail = tail->next;
            free(temp);
        }
        current->next = tail;
        current = tail;
    }
}

int main()
{
    Node *head = NULL;

    int value, M, N;

    int t;
    cin >> t >> M >> N;
    while (t--)
    {
        cin >> value;
        insertAtTail(head, value);
    }

    skipMdeleteN(head, M, N);
    display(head);

    return 0;
}