#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,q,s=0,c;
    printf("enter a number");
    scanf("%d",&n);
    c=n;
    while(c>0)
    {
        q=c%10;
        s=(s*10)+q;
        c=c/10;
    }
    if(s==n)
    {
        printf("palindrome %d",s);
    }
    else
    {
        printf("not palindrome %d",s);
    }
}
