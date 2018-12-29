#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    FILE *fp;
    struct node *link;
}*root;
void insert(char);
void del(int);
void display();
void main()
{
int choice;
char filename;
root=NULL;
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
        printf("enter the file name you want to insert");
        scanf("%s",&filename);
        insert(filename);
    break;
    case 2:
    break;
    case 3:
    break;
    case 4:
        exit(0);
    break;
    }
}
}
void insert(char file)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->fp=fopen(file,"r");
    temp->link=NULL;
    root=temp;
}
void display()
{

}
