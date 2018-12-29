#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
    int data;
    struct tree *left,*right;
}tree;
tree *createnode(int data)
{
    tree *node;
    node=(tree*)malloc(sizeof(tree));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
void insert(tree *root,int num)
{
    tree *par,*loc;
    par=NULL;
    loc=root;
    while(loc!=NULL)
    {
        if(num==loc->info)
            printf("duplicate data");
            par=loc;
        if(num>loc->info)
        {
            loc=loc->right;
        }
        else
        {
            loc=loc->left;
        }
        if(num<par->data)
            par->left=createnode(num);
        else if(num>par->data)
            par->right=createnode(num);
    }
}
