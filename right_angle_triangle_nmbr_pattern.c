//question 5:-Write a program in C to display the pattern like right angle triangle with a number.
#include<stdio.h>
int main()
{
    int row,i,j;
    printf("Enter number of row:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}