#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        left = NULL;
        right = NULL;
        data = val;
    }
};

int CountNodes(Node *root)
{
    if (root == NULL)
        return 0;

    return CountNodes(root->left) + CountNodes(root->right) + 1;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << CountNodes(root);
    return 0;
}