/*1. WAP in C to swap two numbers. (say, x=1, y=2. Then output will be: x=2, y=1) [no need to
use array]*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Values before swaping are %d and %d\n",a,b);
    a=a+b-(b=a);
    printf("Values after swaping are %d and %d\n",a,b);
    return 0;
}