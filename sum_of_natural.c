//question1:-write a program to take 10 numbers from keyboard and print sum of it 
#include<stdio.h>
int main()
{
    int sum=0,i,num;
    printf("Enter 10 number one by one:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    printf("Sum=%d\tAverage=%.2f\n",sum,(float)sum/10);
    return 0;
}