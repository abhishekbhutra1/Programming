#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int a[10],size,ch,i;
clrscr();
printf("enter the size of array");
scanf("%d",&size);
printf("enter the elements of array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
printf("%d",a[i]);
}
getch();
}
