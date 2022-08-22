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
int height(Node* root)
{
    if(root ==NULL)
    return 0;
    return (max(height(root->left),height(root->right)))+1;

}

 bool isBalanced(Node* root)
 {
      if(root ==NULL)
       return true;
     if(isBalanced(root->left) == false)
      return false;

      if(isBalanced(root->right) ==false)
      return false;
      int lh =height(root->left);
      int rh =height(root->right);

      if(abs(lh -rh)<=1)
      {
          return true;
      }
      else
      {
          return false;

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

     Node *root1 = new Node(1);
    root1->left = new Node(2);
    
    root1->left->left = new Node(3);

 if(isBalanced(root))
 {
     cout<<"Balnced Binary Tree";
 }
 else
 {
     cout<<"Not a Balance Binary Tree";
 }
    
 if(isBalanced(root1))
 {
     cout<<"Balnced Binary Tree";
 }
 else
 {
     cout<<"Not a Balance Binary Tree";
 }
    

    return 0;
}
