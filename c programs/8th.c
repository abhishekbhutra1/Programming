#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[10],c[5],i,j,front=0,rear=5;
    int length;
    printf("enter a string\n");
    gets(a);
    length=strlen(a);
    for(i=0;i<length,a[i]!='\0';i++)
    {
        if(i<10)
        {
            b[i]=a[i];
            printf("b=%c\n",b[i]);
        }
        else if(i>10)
        {
             c[i]=a[i];
            printf("c=%c\n",c[i]);
        }
    }

}

