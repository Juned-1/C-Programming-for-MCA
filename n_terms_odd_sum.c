//question3:- Write a program in C to display the n terms of odd natural number and their sum.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter maximum term(natural number):");
    scanf("%d",&n);
    printf("Odd natural numbers are\n");
    for(i=1;i<=n;i+=2)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("\nSum=%d\n",sum);
    return 0;
}