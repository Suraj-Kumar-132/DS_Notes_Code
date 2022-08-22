#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void printLevelOrder(node *root)
{
    if (root == NULL)
        return;

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *Node = q.front();
        q.pop();
        if (Node != NULL)
        {
            cout << Node->data << " ";
            if (Node->left)
                q.push(Node->left);
            if (Node->right)
                q.push(Node->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int sumAtK(node *root, int K)
{
    if (root == NULL)
        return -1;

    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        node *Node = q.front();
        q.pop();
        if (Node != NULL)
        {
            if (level == K)
            {
                sum = sum + Node->data;
            }
            if (Node->left)
            {
                q.push(Node->left);
            }
            if (Node->right)
            {
                q.push(Node->right);
            }
        }
        else if (!q.empty())
        {

            q.push(NULL);
            level++;
        }
    }

    return sum;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    printLevelOrder(root);

    cout << sumAtK(root, 2);
}