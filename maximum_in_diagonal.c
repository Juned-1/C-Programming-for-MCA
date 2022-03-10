/*Create a 5 X 5 matrix and find the maximum and minimum diagonal elements of a matrix.*/
#include<stdio.h>
int main()
{
    int mat[5][5],i,j,min,max;
    printf("Enter elements of matrix one by one:\n");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&mat[i][j]);
    min = mat[0][0];
    max = mat[1][1];
    for(i=1;i<5;i++){
        min = mat[i][i] < min ? mat[i][i] : min;
        max = mat[i][i] > max ? mat[i][i] : max;
    }
    printf("Minimum = %d, Maximum = %d\n",min,max);
    return 0;
}