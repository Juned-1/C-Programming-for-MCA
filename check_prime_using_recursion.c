#include<stdio.h>
int isPrime(int,int);
int main()
{
    int num;
    do{
        printf("Enter a natural number:");
        scanf("%d",&num);
    }while(num<=0);
    if(isPrime(num,num/2))
        printf("%d is prime number\n",num);
    else
        printf("%d is not prime number\n",num);
    return 0;
}
int isPrime(int n,int i)
{
    if(i<=2)
        return (n==2) ? 1 : 0;
    if(n%i==0) //if got divided then not prime
        return 0;
    return isPrime(n,--i);
}