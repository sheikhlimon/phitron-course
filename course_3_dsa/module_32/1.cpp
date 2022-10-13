// C++ program to check if two BSTs
// are identical

#include <iostream>
using namespace std;

// BST node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to perform inorder traversal
void inorder(Node *root) {
    if (root == NULL)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

bool isSame(Node *root1, Node *root2) {
    if (root1 == NULL && root2 == NULL)
        return true;
    else if (root1 == NULL || root2 == NULL)
        return false;
    else {
        if (root1->data == root2->data && isSame(root1->left, root2->left) &&
            isSame(root1->right, root2->right))
            return true;
        else
            return false;
    }
}

// Driver code
int main() {
    Node *root1 = new Node(5);
    Node *root2 = new Node(5);
    root1->left = new Node(3);
    root1->right = new Node(8);
    root1->left->left = new Node(2);
    root1->left->right = new Node(4);

    root2->left = new Node(3);
    root2->right = new Node(3);
    root2->left->left = new Node(2);
    root2->left->right = new Node(4);

    if (isSame(root1, root2))
        cout << "Both BSTs are identical";
    else
        cout << "BSTs are not identical";

    return 0;
}