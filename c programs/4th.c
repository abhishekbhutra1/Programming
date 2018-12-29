#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
}*start;
void insert_begin(int);
void insert_end(int);
void create(int);
void del_begin();
void display();
main()
{
   int data,choice,position;
   start=NULL;
   while(1)
   {
   printf("1.create \n");
   printf("2.display \n");
   printf("3.exit \n");
   printf("4.insert_end \n");
   printf("5.insert_start \n");
   printf("6.del-begin \n");
   printf("7.del_end \n");
      scanf("%d",&choice);
   switch(choice)
   {
   case 1:
       printf("enter the data part of first node \n");
       scanf("%d",&data);
       create(data);
       break;
   case 2:
        display();
        break;
   case 3:
    exit(0);
    break;
   case 4:
    printf("enter the number to be inserted at the end");
    scanf("%d",&data);
    insert_end(data);
    break;
   case 5:
    printf("enter the number to inserted at the beginning");
    scanf("%d",&data);
    insert_begin(data);
    break;
   case 6:
       del_begin();
    break;
     default:
       printf("invalid input");
   }
   }
}
void create(int data)
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 if(start==NULL)
 {
    temp->info=data;
    temp->link=NULL;
    start=temp;
 }
 printf("link created \n");
}
void display()
{
struct node *ptr;
ptr=start;
if(start==NULL)
{
    printf("list is empty \n");
    getch();
}
printf("linked list");
while(ptr!=NULL)
{
        printf("%d \n",ptr->info);
        ptr=ptr->link;
}
printf("end of list\n");
}
void insert_end(int data)
{
struct node *ptr,*tempnode;
ptr=start;
while(1)
{
if(ptr->link!=NULL)
    ptr=ptr->link;
else break;
}
tempnode=(struct node *)malloc(sizeof(struct node *));
tempnode->info=data;
tempnode->link=NULL;
ptr->link=tempnode;
}
void insert_begin(int data)
{
struct node *ptr,*temp;
ptr=start;
temp=(struct node *)malloc(sizeof(struct node *));
temp->info=data;
temp->link=ptr;
start=temp;
}
void del_begin()
{
struct node *ptr;
ptr=start;
start=ptr->link;
printf("1st node deleted");
}
