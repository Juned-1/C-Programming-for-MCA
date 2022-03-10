//question 3. Write a program in C to multiply two numbers without using the * operator using do...while
#include<stdio.h>
int main()
{
    int n1,n2,i=1,sum;
    printf("Enter two number:");
    scanf("%d %d",&n1,&n2);
    sum=0;
    do
    {
        sum+=n1;
        i++;
    }while(i<=n2);
    printf("%d X %d = %d\n",n1,n2,sum);
    return 0;
}