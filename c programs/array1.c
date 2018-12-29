#include<stdio.h>
void main()
{
int t,n,k,i,min=0,j,a[100000];
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%d",&k);
        //accepting the array elements..
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        //printing the values...
        for(j=0;j<n;j++)
            {
                if(j==0)
                {
                    min=j;
                }
                else if(a[min]>a[j])
                {
                    min=j;
                }
            }
            if((k-a[min])>0)
                printf("\nseconds=%d",(k-a[min]));
            else
                printf("%d",0);
    }
}
