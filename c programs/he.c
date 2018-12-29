#include<stdio.h>
void main()
{
    int h[10][10],l,n,i,j;
    printf("enter the minimum length of images");
    scanf("%d",&l);
    printf("enter the number of images");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&h[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            if(h[i][j]>=l)
            {
                if(h[i][0]==h[i][1])
                    printf("accepted");
                else
                    printf("crop it");
            }
            else
                printf("upload another");
        }
        printf("\n");
    }
}
