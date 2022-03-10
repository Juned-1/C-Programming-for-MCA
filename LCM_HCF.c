/*25. a) Write a program using functions to find the HCF, LCM of two numbers.*/
#include<stdio.h>
int lcm(int,int);
int hcf(int,int);
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    printf("LCM of %d and %d = %d\n",a,b,lcm(a,b));
    printf("HCF of %d and %d = %d\n",a,b,hcf(a,b));
    return 0;
}
/*lcm is least common multiple*/
int lcm(int m,int n)
{
    /*common multiple will be in range a>b?a:b to a*b and each time we will increment multiple by a>b?a:b*/
    int l;
    for(l=(m>n?m:n);l<=m*n;l+=(m>n?m:n))
    {
        if(l%m==0&&l%n==0)/*least common multiple, for rest of multiple it can not go on due return jump*/
            return l;
    }
}
int hcf(int m,int n)
{
    /*The range of hcf is from 1 to a<b?a:b*/
    int h;
    for(h=(m<n?m:n);h>=1;h--)
    {
        if(m%h==0&&n%h==0)/*since we are running loop reverse, so highest common factor will return*/
            return h;
    }
}