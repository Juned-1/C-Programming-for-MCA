#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter number of row:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(i%2==1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}