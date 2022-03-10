#include<stdio.h>
void prime(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    prime(num);
}
void prime(int n)
{
    int i,flag=1,h;
    h=n/2; //check till half of that number divide the number or not
    for (i=2;i<=h;i++)
    {
        if(n%i==0)
        {
            printf("%d is not prime number\n",n);
            flag=0;
            break;
        }
    }
    if(flag)
        printf("%d is prime number\n",n);
}