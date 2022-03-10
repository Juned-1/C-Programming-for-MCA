/*Write a C program that accepts an employee's ID, total worked hours of a month
and the amount he received per hour. Print the employee's ID and salary (with two
decimal places) of a particular month.*/
#include<stdio.h>
int main()
{
    int hr[100][2],n,i;
    float amnthr[100];
    printf("Enter number of employee:");
    scanf("%d",&n);
    printf("Enter employee id, total hour of work, per hour earning one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %d %f",&hr[i][1],&hr[i][2],&amnthr[i]);
    }
    printf("Employee Id\tSalary\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\tRs. %.2f\n",hr[i][1],(float)hr[i][2]*amnthr[i]);
    }
    return 0;
}