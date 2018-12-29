#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,k,l;
    int z=0;
    printf("enter range");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        k=i;
        while(k>0)
        {
            l=k%10;
            z=l+(z*10);
            k=k/10;
        }
        if(z==i)
            {printf("\n palindrome \n %d",i);
            k=0;
            z=0;
            break;
            }
        else
            {
           k=0;
           z=0;
           }
    }
}
