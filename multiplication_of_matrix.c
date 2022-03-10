//4. WAP in C to multiply two matrices.
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2,sum;
    printf("Enter number of rows and columns for first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of rows and columns for second matrix:");
    scanf("%d %d",&r2,&c2);
    if(r1!=c2||r2!=c1)
        printf("Matrix multiplication is not possible, since shape are not compatible\n");

    else
    {
        printf("Enter element of first matrix one by one:\n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
        printf("Enter element of second matrix one by one:\n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&b[i][j]);
        //Multiplication
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<r2;k++)
                    sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
        //printing result
        printf("Resultant matrix is\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
    return 0;
}