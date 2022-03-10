/*Write a program to interchange row 1 and row 3 of a 5 x 3 matrix.*/
#include<stdio.h>
int main()
{
    int mat[5][3],i,j,temp;
    printf("Enter elements in array:\n");
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
            scanf("%d",&mat[i][j]);
    printf("Before interchange:\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    //interchange
    for(i=0;i<3;i++){
        temp = mat[0][i];
        mat[0][i] = mat[2][i];
        mat[2][i] = temp;
    }
    printf("After interchange:\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    return 0;
}