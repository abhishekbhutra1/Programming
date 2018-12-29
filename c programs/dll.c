#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *left,*right;
int info;
}*start;
void main()
{
    int data,choice,root,i=0,counter=0;
    start=NULL;
    while(1)
    {
        printf("0.create");
        printf("1.insert");
        printf("2.preorder");
        printf("3.inorder");
        printf("4.postorder");
        printf("5.delete");
        printf("6.exit");
        scanf("%d",& choice);
        switch(choice)
        {
        case 0:
            if(i==0)
            {
            printf("enter the root node");
            scanf("%d",root);
            create(root);
            i++;
            }
            else
                printf("root already created");
            break;
        case 1:printf("enter the number to be inserted");
                scanf("%d",&data);
                counter++;
                insert(data,counter);
            break;
        case 6:exit(0);
        }
    }
}
void create(int root)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=root;
    temp->left=NULL;
    temp->right=NULL;
    start=temp;
}
void insert(int data,int counter)
{
    int i=1;
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    temp->info=data;
    ptr=start;
    while(i>0){
    while(ptr->info > data)
    {
        if(ptr->left == NULL)
        {
            ptr->left=temp;
            ptr=ptr->left;
        }
        else
        {
            ptr=ptr->left;
            continue;
        }
    }
    while(ptr->info < data)
    {
        if(ptr->right == NULL)
        {
            ptr->right=temp;
            ptr=ptr->right;
        }
        else
        {
            ptr=ptr->right;
            continue;
        }
    }
    if(ptr->info > data)
        i=i+1;
    else
        i=0;
    }
}
