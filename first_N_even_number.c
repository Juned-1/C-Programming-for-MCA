#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("First %d even number:\n",n);
    for(i=1;i<=n;i++)
        printf("%d ",2*i);
    printf("\n");
    return 0;
}