#include<stdio.h>
#include<string.h>
void main()
{
    int a[100][100],x,y,i,j,n,k,loc;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter 4 for tree and 8 for water");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter the coordinates you want to start");
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==x&&j==y)
                printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
