//3. Write a program for addition of two matrices of the same size and display the new matrix.
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j;
    printf("Enter number of row and column for arrays to add:");
    scanf("%d %d",&m,&n);
    printf("Enter elemnts of first matrix one by one:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter elements of second matrix one by one:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }
    printf("Resultant matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}