/*Write a C program to read the value of an integer m and display the value of n is 1
when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.*/
#include<stdio.h>
int main()
{
    int num,i,n;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
        printf("1\n");
    else if(num==0)
        printf("0\n");
    else
        printf("-1\n");
    return 0;
}