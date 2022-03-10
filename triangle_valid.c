#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("Enter three angle:");
    scanf("%d %d %d",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(sum==180)
        printf("Triangle is valid\n");
    else
        printf("Invalid, triangle can not be formed\n");
    return 0;
}