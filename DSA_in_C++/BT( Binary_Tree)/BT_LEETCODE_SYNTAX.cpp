#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };;

  TreeNode* takeinput()
  {
     int rootdata;
     cout<<"Enter root data";
     cin>>rootdata;
     TreeNode * root = new TreeNode(rootdata);
     queue<TreeNode*>q;
     q.push(root);
     while (q.empty()!=1)
     {
          TreeNode * fro = q.front();
          q.pop();
          cout<<"Enter left value of "<<fro->val <<" or else input -1 for NULL"<<endl;
          int leftdata,rightdata;
          cin>>leftdata;
          if(leftdata!=-1)
          {
               TreeNode * new1 =new TreeNode(leftdata);
               q.push(new1);
               fro->left=new1;
          }
          cout<<"Enter right value of "<<fro->val <<" or else input -1 for NULL";
          cin>>rightdata;
          if(rightdata!=-1)
          {
               TreeNode * new1 =new TreeNode(rightdata);
               q.push(new1);
               fro->right=new1;
          }
     }
     return root;
     

  }

 void printree(TreeNode *root)
 {
     if(root==NULL) return;
     cout<<root->val<<":";
     if(root->left) cout<<"L- "<<root->left->val;
     if(root->left) cout<<"R- "<<root->right->val;
     cout<<endl;

     printree(root->left);
     printree(root->right);

 }

 int main()
 {
     TreeNode * root= takeinput();

     printree(root);

 }

