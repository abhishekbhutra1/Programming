#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],*front,*rear;
void main()
{
    int i=-1,j=-1,choice,data;
    front=&i;
    rear=&j;
    while(1)
    {
        printf("enter your choice");
        printf("1.insert");
        printf("2.delete");
        printf("3.display");
        printf("4.exit");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the number you want to insert");
            scanf("%d",&data);
            insert(data);
            break;
        case 2:
            break;
        case 3:display();
            break;
        case 4:exit(0);
            default:printf("invalid number");
        }
    }
}
int queueempty()
{
    if(*front==-1 && *rear==-1)
        return 0;
    else
        return 1;
}
int queuefull()
{
    if(*rear==(size-1))
        return 0;
    else
        return 1;
}
void insert(int data)
{
    if(queuefull()==0)
       {
         printf("overflow");
         return;
       }
    else if(queueempty()==0)
    {
        printf("enter 1st element");
        scanf("%d",&data);
        *front=*front+1;
        *rear=*rear+1;
        queue[*rear]=data;
    }
    else
    {
        *rear=(*rear)+1;
        queue[*rear]=data;
    }
}
void delete()
{
    if(queueempty()==0)
        printf("underflow");
    else
    {
        free(&queue[*front]);
        *front=*front+1;
    }
}
void display()
{int i;
    for(i=*front;i<*rear;i++)
        printf("%d",queue[i]);
}
