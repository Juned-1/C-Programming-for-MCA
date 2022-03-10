//question2:-Write a program in C to display the cube of numbers up to given an integer.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter an integer number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Number=%d, Cube of %d=%d\n",i,i,i*i*i);
    }
    return 0;
}