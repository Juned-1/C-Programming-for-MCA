#include<stdio.h>
int main()
{
    int num,div=1000,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=0;i<4;i++)
    {
        printf("%d\n",num);
        num=num%div;
        div=div/10;
    }
    return 0;
}