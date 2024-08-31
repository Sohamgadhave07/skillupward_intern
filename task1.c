#include<stdio.h>

void main()
{
    int x,i,fact=1;
    printf("enter the number: ");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial of the number is: %d",fact);
}