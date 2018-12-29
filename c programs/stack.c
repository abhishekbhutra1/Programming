#include<stdio.h>
#include<stdlib.h>
#define max 5
int *top,stack[max];
void push(int);
void main()
{
    int z=0;
    top=&z;
    int data,choice;
    while(1)
    {
        printf("enter your choice");
        printf("1.push");
        printf("2.pop");
        printf("3.display");
        printf("4.exit");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:printf("enter the number to be inserted");
                scanf("%d",&data);
                push(data);
            break;
        case 2:pop();
            break;
        case 3:display();
            break;
        case 4:exit(0);
        default:printf("invalid number");
        }
    }
}
int stackfull()
{
    if((*top)==max)
        return 0;
    else
        return 1;
}
int stackempty()
{
    if((*top)==0)
        return 0;
    else
        return 1;
}
void push(int data)
{
    if(stackfull()==0)
         printf("overflow");
    else
    {
        stack[*top]=data;
        printf("stack[%d]=%d",*top,stack[*top]);
        (*top)++;
        printf("\nthe value at top:%d\n",*top);
    }
}
void pop()
{
    int item;
    if(stackempty()==0)
        printf("underflow");
    else
    {
        item=stack[*top];
        printf("popped element is:%d",item);
        printf("value of *top before decrement:%d",*top);
        (*top)--;
        printf("value of *top after decrement:%d",*top);
    }
}
void display()
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("stack[%d]=%d",i,stack[i]);
    }
}
