#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<100)
        printf("%d is less than 100\n",num);
    else if(num>100)
        printf("%d is greater than 100\n",num);
    else
        printf("%d is equal to 100\n",num);
    return 0;
}