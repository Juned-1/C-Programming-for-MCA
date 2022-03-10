#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter a positive number:");
    scanf("%d",&num);
    printf("%d! = %d\n",num,factorial(num));
    return 0;
}
int factorial(int n)
{
    if(n<1)
        return 1;
    return n*factorial(n-1);
}