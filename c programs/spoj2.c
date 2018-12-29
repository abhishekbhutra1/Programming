#include<stdio.h>
#include<time.h>
main()
{
    int a,b,i,j,k,t;
    int time_spent;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d",&a,&b);
        clock_t begin = clock();
        for(i=a;i<=b;i++)
        {
            k=0;
            for(j=2;j<=(i/2);j++)
            {
                if(i%j!=0)
                    continue;
                else
                {
                    k=1;
                    break;
                }
            }
            if(k==0 && i!=1)
                printf("%d\n",i);
                }
                clock_t end = clock();
                time_spent=(end-begin);
                printf("time taken %d",time_spent);
        printf("\n");
        t--;
    }
}
