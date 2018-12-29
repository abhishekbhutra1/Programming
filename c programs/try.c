#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char a[10],b[10],c[10];
    int i,j,k,l,sum=0,carry=0,lb,lc;
    printf("enter the operation");
    gets(a);
    l=strlen(a);
    printf("length of a=%d\n",l);
    for(i=0;i<l;i++)
    {
        if(a[i]=='+'||a[i]=='-'||a[i]=='*')
            break;
    }
    for(j=0;j<i;j++)
        {
            b[j]=a[j];
            printf("%c\n",b[j]);
        }
    for(k=i+1;k<l;k++)
        {
            c[k]=a[k];
            printf("%c\n",c[k]);
        }
    switch(a[i])
    {
    case '+':
        printf("addition operation\n");

        break;
    case '-':
        printf("substraction operation\n");
        break;
    case '*':
        printf("multiplication operation\n");
        break;
    default:
        printf("invalid operation\n");
    }
}
int add(char b[],char c[],int carry,int operand)
{
    int i;
    for(i=operand;)
}
