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

struct Test
{
    int position[1000];
};

void insertAtHead(Node *&head, int val);
void insertAtTail(Node *&head, int val);
void display(Node *head);
int countLength(Node *&head);
void insertionAtSpecificPosition(Node *&head, int pos, int val);
int searchByValueUnique(Node *&head, int key);
void searchByValueDuplicate(Node *&head, int key);
Test searchByValueDuplicateReturn(Node *&head, int key);
void insertByValueUnique(Node *&head, int searchValue, int value);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deletionAtSpecificPosition(Node *&head, int pos);
void deletionByValueUnique(Node *&head, int value);

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

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertionAtSpecificPosition(Node *&head, int pos, int val)
{
    Node *temp = head;
    int i = 0;
    while (i < pos - 2)
    {
        temp = temp->next;
        i++;
    }

    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

int searchByValueUnique(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;

    if (temp == NULL)
    {
        return -1;
    }

    while (temp->value != key)
    {
        if (temp->next == NULL)
        {
            return -1;
        }
        temp = temp->next;
        count++;
    }

    return count;
}

void searchByValueDuplicate(Node *&head, int key)
{
    Node *temp = head;
    int size;
    size = countLength(head);
    int position[size + 1], k = 1;
    int count = 1;
    int flag = 0;

    while (temp != NULL)
    {
        if (temp->value == key)
        {
            position[k] = count;
            k++;
            flag = 1;
        }
        temp = temp->next;
        count++;
    }
    if (flag == 0)
    {
        cout << "The Searched Value is not yet in the List" << endl;
    }
    else
    {
        position[0] = k;
        cout << "The value is found at Position: ";
        for (int i = 1; i < position[0]; i++)
        {
            cout << position[i];
            if (i < position[0] - 1)
            {
                cout << ", ";
            }
        }
        cout << endl;
    }
}

Test searchByValueDuplicateReturn(Node *&head, int key)
{
    Node *temp = head;
    Test T;
    int k = 1;
    int count = 1;

    while (temp != NULL)
    {
        if (temp->value == key)
        {
            T.position[k] = count;
            k++;
        }
        temp = temp->next;
        count++;
    }
    T.position[0] = k;
    return T;
}

void insertByValueUnique(Node *&head, int searchValue, int value)
{
    int position;
    position = searchByValueUnique(head, searchValue);
    insertionAtSpecificPosition(head, position + 1, value);
}

void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        head = temp->next;
        delete temp;
    }
    else
    {
        cout << "There is no Value in the Linked List" << endl;
    }
}

void deletionAtTail(Node *&head)
{
    Node *temp = head;

    if (temp != NULL && temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        Node *delNode = temp->next;
        temp->next = NULL;
        delete delNode;
    }
    else
    {
        if (temp == NULL)
        {
            cout << "There is no value in the Linked List";
        }
        else
        {
            deletionAtHead(head);
        }
    }
}

void deletionAtSpecificPosition(Node *&head, int pos)
{
    Node *temp = head;

    if (temp != NULL && pos <= countLength(head))
    {
        if (pos == 1)
        {
            deletionAtHead(head);
        }
        else if (pos == countLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            Node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
    }
    else
    {
        cout << "Position out of bound";
    }
}

void deletionByValueUnique(Node *&head, int value)
{
    int pos;
    pos = searchByValueUnique(head, value);

    if (pos == -1)
    {
        cout << "Value not found in the linked list";
    }
    else
    {
        deletionAtSpecificPosition(head, pos);
    }
}

int findMid(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->value;
}

int main()
{
    Node *head = NULL;

    int value;
    int pos;

    cout << "Choice 1: Insertion at Head"
         << endl
         << "Choice 2: Insertion at Tail"
         << endl
         << "Choice 3: Insertion at Specific Position"
         << endl
         << "Choice 4: Search a value (Unique List)"
         << endl
         << "Choice 5: Search a value (Duplicate enabled List)"
         << endl
         << "Choice 6: Insertion by value (Unique List)"
         << endl
         << "Choice 7: Deletion at Head"
         << endl
         << "Choice 8: Deletion at Tail"
         << endl
         << "Choice 9: Deletion at specific value"
         << endl
         << "Choice 10: Deletion by value (Unique List)"
         << endl
         << "Choice 11: Finding the Mid (Slow-Fast Method)"
         << endl
         << "Choice 0: Exit"
         << endl
         << endl;

    cout << "Next Choice: ";
    int choice;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            insertAtHead(head, value);
            break;
        case 2:
            cout << "Enter the value: ";
            cin >> value;
            insertAtTail(head, value);
            break;
        case 3:
            cout << "Enter the Desired Postion: ";
            cin >> pos;
            cout << "Enter the value: ";
            cin >> value;
            insertionAtSpecificPosition(head, pos, value);
            break;
        case 4:
            cout << "Enter the value to search: ";
            cin >> value;
            pos = searchByValueUnique(head, value);
            if (pos != -1)
            {
                cout << "The number is at Position: " << pos << endl;
            }
            else
            {
                cout << "The number is not yet in the list" << endl;
            }
            break;
        case 5:
            cout << "Enter the value to search: ";
            cin >> value;
            Test T;
            T = searchByValueDuplicateReturn(head, value);
            if (T.position[0] == 1)
            {
                cout << "The searched Value is not yet in the list" << endl;
            }
            else
            {
                int size = T.position[0];
                cout << "The value is found at Position: ";
                for (int i = 1; i < size; i++)
                {
                    cout << T.position[i];
                    if (i < size - 1)
                    {
                        cout << ", ";
                    }
                }
                cout << endl;
            }
            break;
        case 6:
            cout << "Enter the value to search: ";
            int searchValue;
            cin >> searchValue;
            cout << "Enter the value to insert: ";
            cin >> value;
            insertByValueUnique(head, searchValue, value);
            break;
        case 7:
            deletionAtHead(head);
            break;
        case 8:
            deletionAtTail(head);
            break;
        case 9:
            if (head == NULL)
            {
                cout << "There is no value in the linked list";
                break;
            }
            cout << "Enter the Desired Position: ";
            cin >> pos;
            deletionAtSpecificPosition(head, pos);
            break;
        case 10:
            cout << "Enter the value to delete: ";
            int delValue;
            cin >> delValue;
            deletionByValueUnique(head, delValue);
            break;
        case 11:
            int mid;
            mid = findMid(head);
            if (mid == -1)
            {
                cout << "The ll is empty";
            }
            else
            {
                cout << "Mid value is: " << mid << endl;
            }
            break;
        default:
            break;
        }

        display(head);

        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << endl
         << "Linked List: ";
    display(head);
    cout << "Length of the List: " << countLength(head) << endl;

    return 0;
}
