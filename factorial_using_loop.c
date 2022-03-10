//question 6:- Write a C program to calculate the factorial of a given number.
#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter a number to find factorial:");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        fact*=i;
    }
    printf("Factorial of %d is %d\n",num,fact);
    return 0;
}