#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],i;
   for(i=0;i<10;i++)
   {
       printf("enter %d element",i);
       scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
   {
       if(a[i]!=42)
        printf("%d\n",a[i]);
       else
        break;
   }
}
