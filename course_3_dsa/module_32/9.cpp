// C++ Program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Structure of a tree node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Function to insert a new node
// in a binary tree
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

// Function to check If the tree
// is uni-valued or not
bool isUnivalTree(Node *root)
{

    // If tree is an empty tree
    if (!root)
    {
        return true;
    }

    // If all the nodes on the left subtree
    // have not value equal to root node
    if (root->left != NULL && root->data != root->left->data)
    {
        return false;
    }

    // If all the nodes on the left subtree
    // have not value equal to root node
    if (root->right != NULL && root->data != root->right->data)
    {
        return false;
    }

    // Recurse on left and right subtree
    return isUnivalTree(root->left) && isUnivalTree(root->right);
}

// Driver Code
int main()
{

    /*
                1
              /   \
             1     1
           /  \     \
          1    1     1
    */
    Node *root = newNode(1);
    root->left = newNode(1);
    root->right = newNode(1);
    root->left->left = newNode(1);
    root->left->right = newNode(1);
    root->right->right = newNode(1);

    if (isUnivalTree(root) == 1)
    {

        cout << "YES";
    }
    else
    {

        cout << "NO";
    }
    return 0;
}