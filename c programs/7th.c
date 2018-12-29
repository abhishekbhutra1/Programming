#include<stdio.h>
void main()
{
  int a,b,i,j,k,t;
  printf("enter number of test cases");
  scanf("%d",&t);
  for(k=1;k<=t;k++)
  {
  printf("enter the 1st number");
  scanf("%d",&a);
    printf("enter the 2nd number");
  scanf("%d",&b);
  for(i=a;i<=b;i++)
  {
      for(j=2;j<(i);j++)
      {
            if(i%j==0)
                break;
      }
      if(j==i)
        printf("%d\n",i);
 }
}
}

