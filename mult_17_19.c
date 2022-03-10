#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%17==0&&num%19==0)
        printf("%d is divisible by both 17 and 19\n",num);
    else if(num%17==0)
        printf("%d is divisible by 17\n",num);
    else if(num%19==0)
        printf("%d is divisble by 19\n",num);
    else
        printf("%d is neither divisible by 17 nor by 19\n",num);
    return 0;
}