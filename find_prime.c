/*12. Write a C program to determine whether a given number is prime or not.*/
#include<stdio.h>
int main()
{
    int num,i,flag=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number\n",num);
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("%d is Prime number\n",num);
    return 0;
}