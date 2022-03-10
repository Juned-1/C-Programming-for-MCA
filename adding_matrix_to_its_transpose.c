/*10. Write a program in C for adding a matrix with its transpose.*/
#include<stdio.h>
int main()
{
    int a[100][100],sum[100][100],i,j,m,n;
    printf("Enter number of row and column for the matrix:");
    scanf("%d %d",&m,&n);
    if(m!=n) //in case of transpose both row and column will change, hence shape of matrix must be same to , that is only
    //possible when matrix is square matrix
        printf("Matrix can not be added to its transpose\n");
    else{
        printf("Enter elements of matrix one by one:\n");
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        //addition
        printf("Resultant matrix is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                sum[i][j]=a[i][j]+a[j][i];
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}