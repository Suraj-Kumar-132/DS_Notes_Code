#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void rightView(Node *root)
{
    queue<int> q;
    if (root == NULL)
    {
        return;
    }
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == n - 1)// right view lena hai na isley
            {
                cout << curr->data << " ";
            }
            if (curr->left != NULL)

            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
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

    rightView(root);
}