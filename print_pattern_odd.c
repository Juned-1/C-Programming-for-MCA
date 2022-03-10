#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter row:");
    scanf("%d",&row);
    for(i=1;i<=row;i+=2)
    {
        for(j=i;j<=row;j+=2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}