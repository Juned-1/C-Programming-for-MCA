#include<stdio.h>
int main()
{
    int mat[100][100],i,j,k,r,c,sum;
    printf("Enter number of row and column:");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix one by one:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Sum of elements in each row are:\n");
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
            sum+=mat[i][j];
        printf("%d\n",sum);
    }
    return 0;
}