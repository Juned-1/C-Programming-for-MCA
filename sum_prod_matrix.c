#include<stdio.h>
int main()
{
    int mat[100][100],i,j,r,c,sum=0,prod=1;
    printf("Enter number of row and column:");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix one by one:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
            sum+=mat[i][j];
            prod*=mat[i][j];
        }
    }
    printf("Sum = %d\nProduct = %d\n",sum,prod);
    return 0;
}