//5. WAP in C to find transpose of a matrix.
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],m,n,i,j;
    printf("Enter number of rows and columns in matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter elements of matrix one by one:\n");
    //Scanning
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    //Transpose of matrix
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            b[i][j]=a[j][i];
    //printing
    printf("Transpose of matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
    return 0;
}