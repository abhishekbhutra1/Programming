#include<stdio.h>
void main()
{
    int i=3;
    printf("%u is the address of i",&i);
    printf("%d is the value of i",i);
    printf("%d is the value of i",*(&i));
}
