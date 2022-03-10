//1. Create a 2-d array with 3 rows and 2 columns with compile time initialization and print the elements.
#include<stdio.h>
int main()
{
    int arr[3][2] = {{1,2},{3,4},{5,6}},i,j;
    printf("Elments in array are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}