//2. Write a program to create a 2-d array, insert elements at run time and print the elements in tabular format.
#include<stdio.h>
int main()
{
    int arr[10][10],row,col,i,j;
    printf("Enter number of row and column:");
    scanf("%d %d",&row,&col);
    printf("Enter elements in array one by one:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Elements in array are:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}