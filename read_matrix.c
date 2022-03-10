#include<stdio.h>
int main()
{
    int mat[100][100],i,j,r,c;
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
    printf("Elements of matrix are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}