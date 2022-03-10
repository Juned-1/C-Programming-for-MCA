/*13. Write a program in C to display the first n terms of Fibonacci series. (Fibonacci
series 0 1 2 3 5 8 13 .....)*/
#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,i,num;
    printf("How many fibonacci number? ");
    scanf("%d",&num);
    printf("Fibonacci series are:\n");
    for(i=1;i<=num;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    printf("\n");
    return 0;
}