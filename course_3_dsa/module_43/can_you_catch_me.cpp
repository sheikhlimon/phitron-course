#include <bits/stdc++.h>
using namespace std;

string s1;
vector<int> path;
int cnt = 0;

class treeNode
{
public:
    int data;
    treeNode *left;
    treeNode *right;

    treeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bool isLeaf(treeNode *root)
{
    return (root->left == NULL && root->right == NULL);
}

void rootToleaf(treeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    path.push_back(root->data);
    if (isLeaf(root))
    {
        string s2 = "";
        for (int x : path)
        {
            s2 += s1[x];
        }
        string s3 = s2;
        reverse(s3.begin(), s3.end());
        if (s3 == s2)
            cnt++;
    }

    rootToleaf(root->left);
    rootToleaf(root->right);
    path.pop_back();
}

void solve()
{
    string s;
    cin >> s;
    s1 = s;
    int r;
    cin >> r;
    treeNode *root = new treeNode(r);
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *present = q.front();
        q.pop();
        int x, y;
        cin >> x >> y;
        treeNode *n1 = NULL;
        treeNode *n2 = NULL;
        if (x != -1)
            n1 = new treeNode(x);
        if (y != -1)
            n2 = new treeNode(y);

        present->left = n1;
        present->right = n2;
        if (n1)
        {
            q.push(n1);
        }
        if (n2)
        {
            q.push(n2);
        }
    }
    rootToleaf(root);
    cout << cnt << endl;
}

int main()
{
    solve();
    return 0;
}