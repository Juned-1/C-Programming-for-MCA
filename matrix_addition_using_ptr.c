/*5. Write a program using pointers to add two matrices.*/
//In C 2d array is array of array, it is stored row by row, its row major*/
#include<stdio.h>
int main()
{
    int arr[10][10],arr2[10][10],arr3[10][10],i,j,m,n,(*p1)[10],(*p2)[10],(*p3)[10];
    printf("Enter number of row and column:");
    scanf("%d %d",&m,&n);
    p1=arr;//&arr[0][0]
    p2=arr2;
    p3=arr3;
    printf("Enter element of matrix 1 one by one:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",(*(p1+i)+j));
    }
    printf("Enter element of matrix 2 one by one:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",(*(p2+i)+j));
    }
    //sum
    printf("Resultant matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(p3+i)+j) = *(*(p1+i)+j) + *(*(p2+i)+j);
            printf("%d\t",*(*(p3+i)+j));
        }
        printf("\n");
    }
    return 0;
}