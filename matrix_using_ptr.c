/*6. Write a program using pointers to print the elements of a matrix.*/
#include<stdio.h>
int main()
{
    int arr[10][10],i,j,m,n,(*p1)[10];
    printf("Enter number of row and column:");
    scanf("%d %d",&m,&n);
    p1 = arr;//&arr[0][0]
    printf("Enter element of matrix 1 one by one:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",(*(p1+i)+j));
    }
    printf("elements of matrix 1 one by one:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",*(*(p1+i)+j));
        printf("\n");
    }
    return 0;
}