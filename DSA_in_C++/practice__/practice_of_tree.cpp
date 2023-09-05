#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:

    int data;
    vector<TreeNode*>children;

    TreeNode(int d)
    {
        data=d;
    }

};

TreeNode* push()
{
    int rootdata;
    cin>>rootdata;
    queue<TreeNode*>q;
    TreeNode *root =new TreeNode(rootdata);
    q.push(root);
    while(!q.empty())
    {
        TreeNode *temp= q.front();
        q.pop();
        int n;
        cout<<"enter the number of nodes of "<<temp->data;
        cin>>n;
        
        for(int i=1;i<=n;i++)
        {
            int t;
            cout<<"enter the value of "<<i<<"th node"<<temp->data<<" ";
            cin>>t;
           TreeNode *new1 =new TreeNode(t);
            temp->children.push_back(new1);
            q.push(new1);
        }
    }
    return root;

}

void printlevel(TreeNode *root)
{
    cout<<"Root data is :"<<root->data<<endl;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode *temp=q.front();
        q.pop();
        cout<<temp->data<<"-->";
        for(int i=0;i<temp->children.size();i++)
        {
            cout<<temp->children[i]->data;
            q.push(temp->children[i]);
        }
        cout<<endl;
    }

    return ;

}

int main()
{
    TreeNode * root= push();
    printlevel(root);
}