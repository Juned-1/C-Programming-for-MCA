/*3. Implement the above question using two-dimensional array*/
#include<stdio.h>
int main()
{
    int m,i,j;
    float bp[100][3];
    printf("Enter the number of emplyee:\n");
    scanf("%d",&m);
    printf("Enter Employee id and Basic pay one by one:\n");
    for(i=0;i<m;i++)
    {
        //Taking employee id and basic pay
        for(j=0;j<2;j++)
        {
            scanf("%f",&bp[i][j]);
            while(bp[i][1]>99999)
            {
                printf("Invalid Salary, Please enter in 5 digit:");
                scanf("%f",&bp[i][1]);
            }
        }
        //Storing value of gross salary
        bp[i][2]=(bp[i][1]>50000)?(0.1*bp[i][1]+0.12*bp[i][1]+bp[i][1]):(0.15*bp[i][1]+0.18*bp[i][1]+bp[i][1]);
    }
    printf("Sl.No\tEmployment Id\tBasic Pay\tGross Salary\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",i+1);
        for(j=0;j<3;j++)
        {
            if(j==0)
                printf("%d\t\t",(int)bp[i][j]);
            else if(j==1)
                printf("%.2f\t",bp[i][j]);
            else
                printf("%.2f",bp[i][j]);
        }
        printf("\n");
    }
    return 0;
}