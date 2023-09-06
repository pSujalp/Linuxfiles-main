#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int data;
     struct Node * next;
};

struct Linked_list
{          
Node * head=NULL;
Node * tail=NULL;


          void push(int d)
          {
             struct  Node * new1 = (Node*) malloc(sizeof(Node));
               new1->data=d;
               if(head==NULL)
               {
                    head=new1;
                    tail=new1;
                    return;
               }
               else
               {
                   tail->next= new1;
                   tail=new1;
               }
          }
          void print_list()
          {
             Node * temp= head;
             while(temp!=NULL)
             {
               printf("%d ",temp->data);
               temp=temp->next;
             }
          }

};
int main()
{
   printf("Enter the no of Nodes in Linked list: \n");
    int s;
    scanf("%d",&s);
    Linked_list l;
    for(int i=0;i<s;i++)
    {
       int x;
       scanf("%d",&x);
       l.push(x);
    }
    l.print_list();
}

