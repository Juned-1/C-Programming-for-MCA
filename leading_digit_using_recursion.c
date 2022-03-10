#include<stdio.h>
int leadDigit(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d is leading digit in %d\n",leadDigit(num),num);
    return 0;
}
int leadDigit(int n)
{
    if(n/10==0)
        return n;
    return leadDigit(n/10);
}