/* C++ program to print level
    order traversal using STL */
#include <bits/stdc++.h>
using namespace std;
 
// A Binary Tree Node
struct Node {
    int data;
    struct Node *left, *right;
};
 
// Iterative method to find height of Binary Tree
void printLevelOrder(Node* root)
{
    // Base Case
    if (root == NULL)
        return;
 
    // Create an empty queue for level order traversal
    queue<Node*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false) {
        // Print front of queue and remove it from queue
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
 
        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}
 
// Utility function to create a new tree node
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
// Driver program to test above functions
int main()
{
    struct Node *root = newNode(15);
    root->left = newNode(11);
    root->right = newNode(26);
    root->left->left = newNode(8);
    root->left->right = newNode(12);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(9);
    root->left->right->right = newNode(14);
    root->right->left = newNode(20);
    root->right->right = newNode(30);
    root->right->right->right = newNode(35);
 
    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}