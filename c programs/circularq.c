#include<stdio.h>
#include<stdlib.h>
#define size 5
int cq[size],*front,*rear;
void main()
{
    int i=0,j=0,choice,data;
    front=&i;rear=&j;
    while(1)
    {
        printf("1.enqueue");
        printf("2.dequeue");
        //printf("3.traverse");
        printf("3.exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
        default:printf("invalid input");
        }
    }
}
void enqueue(int data)
{int i=0;
    if((*front==0 && *rear=-1)||(*front=*rear+1))
        printf("overflow");
    else
    {
        if(*rear==size-1 && *front!=0)
        {
            *rear=-1;
            queue[++(*rear)]=data;
        }
        if(*front==-1)
            front=&i;
    }
}
void dequeue()
{
    if(*front==-1 && *rear==-1)
        printf("queue is empty");
    else
}
