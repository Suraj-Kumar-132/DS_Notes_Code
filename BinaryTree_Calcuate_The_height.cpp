#include"bits/stdc++.h"
using namespace std;
struct Node
{
    public:
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

int countHeight(Node* root)
{
    if(root ==NULL)
    return 0;
    int lHeight = countHeight(root->left);
    int rHeight = countHeight(root->right) ;
    return max(lHeight,rHeight)+1;
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
    cout << countHeight(root)<<endl;
    return 0; 
}