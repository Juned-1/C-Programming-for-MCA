/*14. Write a program in C to find the number and sum of all integer between 100 and
200 which are divisible by 9.*/
#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("Enter number between 100 and 200 divisible by 9 are:\n");
    for(i=108;i<=200;i+=9)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("\nSum = %d\n",sum);
    return 0;
}