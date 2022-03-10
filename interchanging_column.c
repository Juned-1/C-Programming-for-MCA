/*Write a program to interchange column 1 and column 2 of a 3 x 5 matrix.*/
#include<stdio.h>
int main()
{
    int mat[3][5],i,j,temp;
    printf("Enter elements in array:\n");
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
            scanf("%d",&mat[i][j]);
    printf("Before interchange:\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    //interchange
    for(i=0;i<3;i++){
        temp = mat[i][0];
        mat[i][0] = mat[i][1];
        mat[i][1] = temp;
    }
    printf("Before interchange:\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    return 0;
}