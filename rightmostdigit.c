#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Rightmost digit=%d\n",num%10);
    return 0;
}