/*2. WAP to take the ‘Employment Id No’ and ‘Basic Salary (in 5 digit)’ of ‘n=5’ number of
employees of a company from the user. Check the salary of each employee if the basic pay is
greater than 50k then add 10 % and 12% of TA and DA to the basic pay. Else add 15% and
18% of TA and DA to the basic pay of the employee. Display the gross salary of the
employees in the following format.*/
#include<stdio.h>
int main()
{
    int eid[50],n,i;
    float bp[50],gs;
    printf("Enter number of employee\n");
    scanf("%d",&n);
    printf("Enter employee id and Basic Pay one by one\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %f",&eid[i],&bp[i]);
        while(bp[i]>99999)
        {
            printf("Invalid Salary, Please enter in 5 digit:");
            scanf("%f",&bp[i]);
        }
    }
    printf("Sl.No\tEmployment Id\tBasic Pay\tGross Salary\n");
    for(i=0;i<n;i++)
    {
        gs=0;
        if(bp[i]>50000)
            gs=0.1*bp[i]+0.12*bp[i]+bp[i];
        else
            gs=0.15*bp[i]+0.18*bp[i]+bp[i];
        printf("%d\t%d\t\t%.2f\t%.2f\n",i+1,eid[i],bp[i],gs);
    }
    return 0;
}