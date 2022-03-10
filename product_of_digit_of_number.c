/*25.b) Write a program using functions calculate product of digits of a number.*/
#include<stdio.h>
int proddigit(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Product of digit of %d = %d\n",num,proddigit(num));
    return 0;
}
int proddigit(int n)
{
    int prod = 1;
    while(n>0)
    {
        prod*=n%10;
        n/=10;
    }
    return prod;
}