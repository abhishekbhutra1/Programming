#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *link;
}*start;
void main()
{
    int data,choice;
    start=NULL;
    while(1)
    {
        printf("enter your choice");
        printf("1.create");
        printf("2.display");
        printf("3.exit");
        printf("4.insert");
        printf("5.delete");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:printf("enter the data for first element");
                scanf("%d",&data);
                create(data);
            break;
        case 2:display();
            break;
        case 3:exit(0);
        case 4:
            printf("enter the data");
            scanf("%d",&data);
            insert(data);
            break;
        case 5:
            break;
            default:printf("invalid input");
        }
    }
}
void create(int data)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
    {
        start=temp;
        temp->info=data;
        temp->link=start;
    }
}
void insert(int data)
{
    struct node *ptr,*temp;
    ptr=start;
    temp=(struct node*)malloc(sizeof(struct node));
    while(1)
    {
        if(ptr->link!=start)
            ptr=ptr->link;
        else break;
    }
    ptr->link=temp;
    temp->info=data;
    temp->link=start;
}
void display()
{
    struct node *ptr;
    ptr=start;
    while(ptr->link!=start)
    {
        printf("%d\n",ptr->info);
        ptr=ptr->link;
    }
}
