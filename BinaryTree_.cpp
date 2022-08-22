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

Node* LCA( Node* root, int n1, int n2)
{
    if(root==NULL)
    {
        return NULL;

    }
    if(root->data == n1 || root ->data ==n2)
     // root me hi n1 or n2 mil jaiyega to root return kar denge
    {
        return root;
    }
    Node * left = LCA(root-> left, n1,n2);
    Node * right = LCA(root-> right, n1,n2);
    if(left ! =NULL and right != NULL )
    {
        // iska matlb left or right wale me kuch na kuch to aaya NULL ke alawa
        // after execution of  LCA funtion

        return root;
    }
    if(left ==NULL and right == NULL)
    {
        // Matlb n1 or n2 nhi mila tb jo case hoga 
        return NULL;
    }
    if(left != NULL)
    {
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);


}
int distBtwNodes()
int main()
{

}
