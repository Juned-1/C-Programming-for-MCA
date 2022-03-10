#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter dividend and divisor:");
    scanf("%d %d",&num1,&num2);
    printf("Quotient=%d\n",num1/num2);
    printf("Remainder=%d\n",num1%num2);
    return 0;
}