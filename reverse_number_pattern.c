#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter number of row:");
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(j=row;j>=i;j--)
            printf("%d ",i);
        printf("\n");
    }
    return 0;
}