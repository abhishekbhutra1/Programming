#include<stdio.h>
#include<string.h>
void main()
{
    char string[10],search[5],i,j,k,count=0;
    int l;
    printf("enter string");
    gets(string);
    printf("enter word to search");
    gets(search);
    l=strlen(search);
    for(i=1;i<=l;i++)
    {
        for(j=0;j<i;j++)
        {
            if(search[j]==string[j])
               {
                     count++;
                 continue;
               }
            else
            {
               for(k=0;k<10;k++)
               {
                   string[k]=string[k+1];
                   printf("%c\n",string[k]);
               }
            printf("\n");
            }
        }
    }
    printf("count=%d",count);
}
