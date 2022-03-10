/*Write a C program to read roll no, name and marks of three subjects and calculate
the total, percentage and division. (percentage >=60 first division, >=45 second
division, >=30 third division)*/
#include<stdio.h>
int main()
{
    int roll[100],marks[100][3],n,i,j,total;
    char name[100][100], *div;
    float per;
    printf("Enter number of student:");
    scanf("%d",&n);
    printf("Enter roll number, name and marks of three subject of each student one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d",&roll[i],name[i],&marks[i][0],&marks[i][1],&marks[i][2]);
    }
    printf("Roll No\tName\t\tTotal Marks\tPercentage\tDivision\n");
    for(i=0;i<n;i++)
    {
        total=marks[i][0]+marks[i][1]+marks[i][2];
        per=total/3;
        if(per>=60)
            div="1st";
        else if(per>=45)
            div="2nd";
        else if(per>=30)
            div="3rd";
        else
            div="fail";
        printf("%d\t%s\t\t%d\t\t%.2f\t\t%s\n",roll[i],(char *)&name[i],total,per,div);
    }
    return 0;
}