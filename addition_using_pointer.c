/*1. Write a program using pointers to add two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,*p1,*p2;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    printf("%d + %d = %d\n",*p1,*p2,*p1+*p2);
    return 0;
}