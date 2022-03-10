/*There are four students and six subjects. Make a 6 X 4 matrix such that each column stores
the marks obtained by each student for each subject. Display the matrix and calculate the
percentage obtained by each student.*/
#include<stdio.h>
int main()
{
    int mat[6][4],i,j,sum=0;
    for(i=0;i<4;i++){
        printf("Enter marks of 6 subject for student %d:",i+1);
        for(j=0;j<6;j++)
            scanf("%d",&mat[j][i]);
    }
    printf("Marks of student are:\n");
    for(i=0;i<6;i++){
        for(j=0;j<4;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<6;j++)
            sum+=mat[j][i];
        printf("Percentage of student %d = %.2f\n",i+1,(float)sum/6);
        sum=0;
    }
    return 0;
}