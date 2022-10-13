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

// 3 step process to insert at head

void insertAtHead(Node *&head, int val)
{
    // 1. allocate node and value
    Node *newNode = new Node(val);

    // 2. make next of new node as head
    newNode->next = head;

    // 3. move the head to point to
    // the new node
    head = newNode;
}

// function to insert a element
//  after a specific position
// 4 steps process
void insertAfter(Node *&head, int pos, int val)
{
    // 1. allocate node and value
    Node *newNode = new Node(val);
    Node *temp = head;

    // 2. traverse to the desired position
    // save the position in temp
    int i = 1;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    // 3. make next node of newNode
    // as next of temp node
    newNode->next = temp->next;

    // 4 . move the next of temp node
    //  as new node
    temp->next = newNode;
}

// 4 steps process
void insertAtTail(Node *&head, int val)
{
    // 1. allocate node and value
    Node *newNode = new Node(val);

    // 2. if linked list is empty
    // then make the new node as head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    // 3. else traverse till the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // 4. change the next of last node
    temp->next = newNode;
}

void deleteAtHead(Node *&head)
{
    // create a temp head
    Node *temp = head;
    // make the next of temp head
    head = temp->next;
    // delete temp
    delete temp;
}

void deleteAtTail(Node *&head)
{
    // create a temp head
    Node *temp = head;
    // traverse until null
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // make the next of temp null
    temp->next = NULL;

    // delete temp next
    delete temp->next;
}

void deleteAtSpecificPosition(Node *&head, int pos)
{
    // create a temp head
    Node *temp = head;

    // traverse until specific position
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    // create a delnode to capture next of temp
    Node *delNode = temp->next;

    // set the delnode next
    // as next node of temp
    temp->next = delNode->next;

    // delete captured delnode
    delete delNode;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;

    // insert at head
    insertAtHead(head, 3);
    insertAtHead(head, 1);

    // insert at tail
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // insert after
    insertAfter(head, 1, 2);
    insertAfter(head, 5, 6);

    // print linked list
    print(head);
    cout << endl;

    // delete at specific position
    deleteAtSpecificPosition(head, 5);

    // print linked list
    print(head);
    cout << endl;

    return 0;
}