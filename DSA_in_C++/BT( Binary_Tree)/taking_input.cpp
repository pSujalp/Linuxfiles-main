#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BTNode
{
    public:

    T data;
    BTNode *left;
    BTNode *right;
    BTNode(T data)
    {
        this->data=data;
        right=NULL;
        left=NULL;
    }
    
};

BTNode<int>* takeInput(){
     int rootData;
     cout<<"Enter data"<<endl;
     cin>>rootData;

     if(rootData==-1){
        return NULL;
     }
     BTNode<int>* root = new BTNode<int>(rootData);
     BTNode<int>* leftChild = takeInput();
      BTNode<int>* rightChild = takeInput();

      root->left = leftChild;
      root->right = rightChild;

      return root;
}

void printree(BTNode<int>*root)
    {
           if(root==NULL) return;

           cout<<root->data<<"::";
           if(root->left!=NULL) cout<<"L-->"<<root->left->data<<",  ";
           if(root->right!=NULL) cout<<"R-->"<<root->right->data;
           cout<<endl;

           printree(root->left);
           printree(root->right);
    } 

    int countNode(BTNode<int>* root)
    {
        if(root==NULL) return 0;

        return countNode(root->left)+countNode(root->right);
    }


int main()
{
    BTNode<int>*root =takeInput();
    printree(root);cout<<endl;
    cout<<"No. of nodes are "<<countNode(root);

    

    


    }