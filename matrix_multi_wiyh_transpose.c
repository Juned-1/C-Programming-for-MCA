/*11. Write a program in C to find transpose of a matrix and multiply the transpose with
the original matrix.*/
#include<stdio.h>
int main()
{
    int a[100][100],result[100][100],i,j,m,n,k,sum=0;
    printf("Enter number of rows and columns in the matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix one by one:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Transpose of given matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[j][i]);
        printf("\n");
    }
    //multiplication of a matrix with anohter is possible only when row=column or vice versa
    //hence row=column can be achieved after transposing when matrix is square matrix i.e., m=n
    if(m!=n)
        printf("Matrix can not be multiplied with its transpose");
    else{
        printf("Resultant matrix is:\n");
        for(i=0;i<m;i++) //r1-m,c1-n, afrer transpose, r2-n,c2-m and m=n
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++) //in transpose row become column, hence instead changing row, we are changing column
                //[k][j] becomes [j][k] in transpose
                    sum+=a[i][k]*a[j][k];
                result[i][j]=sum;
                sum=0;
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}