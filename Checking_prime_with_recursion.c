#include<stdio.h>
int isPrime(int,int);
int main()
{
    int num;
    do{
        printf("Enter a natural number:");
        scanf("%d",&num);
    }while(num<1);
    if(isPrime(num,2))
        printf("%d is Prime number\n",num);
    else
        printf("%d is not Prime number\n",num);
    return 0;
}
int isPrime(int n,int i)
{
    if(n==1)
        return 0;
    if(n==i)
        return 1;
    else if(n%i==0)
        return 0;
    else
        return isPrime(n,i+1);
}