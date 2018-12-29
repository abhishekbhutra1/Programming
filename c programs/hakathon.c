#include<stdio.h>
void main()
{
    int l,i,j,k;
    char c[100];
    scanf("%s",&c);
    l=strlen(c);
    if((l/2)*2==l)
    {
        j=(l/2);
    }
    else
    {
        j=(l/2)+1;
    }
    for(i=1;i<=j;i++)
    {
        if(c[i]==c[l-i-1])
            k=0;
        else
            k=1;
    }
    if(k==0)
        printf("Palinrome");
}

