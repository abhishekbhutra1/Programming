#include<stdio.h>
#include<string.h>
int read(char [],int);
int
void main()
{
    char a[10],b[10],c[10];
    int i,j,len,pos;
    printf("enter the operation:\n");
    gets(a);
    len=strlen(a);
    pos=read(a,len);
    printf("position of operand:%d\n",pos);
    for(i=0;i<pos;i++)
    {
         b[i]=a[i];
         printf("%c",b[i]);
    }
    printf("\n");
    for(j=i+1;j<len;j++)
    {
        c[j]=a[j];
        printf("%c",c[j]);
    }

}
int read(char a[],int len)
{
    int i;
    for(i=0;a[i]!='+';i++);
       return i;
}
