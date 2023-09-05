#include<stdio.h>
#include<stdlib.h>

struct TNode
{
    int d;
    TNode * arr[266];
};

struct Tree
{
    TNode * root = (TNode*) malloc(sizeof(TNode));
    

};