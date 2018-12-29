#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int a[10],size,i,ch,p,n;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the elements of array");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
while(1)
{
printf("1.insert\n");
printf("2.delete\n");
printf("3.display\n");
printf("4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
    printf("enter the position you want to insert\n");
    scanf("%d",&p);
    insert(&size,p,a);
    break;
case 2:
    printf("enter the position you want to delete\n");
    scanf("%d",&p);
    del(&size,p,a);
    break;
case 3:
    display(size,a);
    break;
case 4:exit(0);
    break;
}
}
}
void insert(int *s,int p,int *a)
{
int i,number;
printf("enter number to add");
scanf("%d",&number);
for(i=*s;i>=p;i--)
a[i+1]=a[i];
a[p]=number;
(*s)++;
}
void display(int s,int *a)
{
int i;
for(i=0;i<s;i++)
    printf("%d\t",a[i]);
}
void del(int *s,int p,int *a)
{
int i;
for(i=p;i<=*s;i++)
{
    a[i]=a[i+1];
}
(*s)--;
}
