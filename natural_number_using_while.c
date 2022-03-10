//question 1. Write a C program to print odd numbers from 1 to N using while loop.
#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter upper limit of natural number:");
    scanf("%d",&num);
    printf("Natural odd number from 1 to %d are:\n",num);
    while(i<=num)
    {
        printf("%d ",i);
        i+=2;
    }
    printf("\n");
    return 0;
}