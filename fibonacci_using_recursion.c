#include<stdio.h>
int fibo(int);
int main()
{
    int num,i;
    printf("Enter number up to whcih you want to print fibonacci series:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d ",fibo(i));
    }
    printf("\n");
    return 0;
}
int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);
}
