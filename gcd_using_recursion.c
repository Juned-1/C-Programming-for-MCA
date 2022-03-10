/*Greatest common diversor or highest common factor using recursion*/
/*Using Euclid theorem GCD(a,b) if(a>b) then GCD(a%b,b) else GCD(a,b%a)*/
#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    printf("HCF od %d and %d = %d\n",a,b,gcd(a,b));
}
int gcd(int m,int n)
{
    if(n==0)
        return m;
    gcd(n,m%n);
}