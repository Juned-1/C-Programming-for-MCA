/*There are four students and six subjects. Make a 4 X 6 matrix such that each row stores the
marks obtained by each student for each subject. Display the matrix and calculate the percentage
obtained by each student.*/
#include<stdio.h>
int main()
{
    int mat[4][6],i,j,sum=0;
    for(i=0;i<4;i++){
        printf("Enter marks of student %d:",i+1);
        for(j=0;j<6;j++)
            scanf("%d",&mat[i][j]);
    }
    printf("Marks of student are:\n");
    for(i=0;i<4;i++){
        for(j=0;j<6;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<6;j++)
            sum+=mat[i][j];
        printf("Percentage of Student %d = %.2f\n",i+1,(float)sum/6);
        sum = 0;
    }
    return 0;
}