#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter two fractional number:");
    scanf("%f %f",&num1,&num2);
    printf("num1=%f, num2=%f, %f/%f=%f\n",num1,num2,num1,num2,num1/num2);
    return 0;
}