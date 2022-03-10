#include<stdio.h>
int main()
{
    int i,j,row,value,diff;
    printf("Enter number of row:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        diff=row-1;
        value=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",value);
            value+=diff;
            diff--;
        }
        printf("\n");
    }
    return 0;
}