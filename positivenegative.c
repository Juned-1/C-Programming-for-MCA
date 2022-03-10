#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
        printf("%d is negative\n",num);
    else if(num==0)
        printf("%d is neither negative nor positive\n",num);
    else
        printf("%d is positive\n",num);
    return 0;
}