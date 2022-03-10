/*1. WAP to take the user input: Roll No, Name and Mark Obtained by ‘n’ number of students
and store in three different arrays. Display the values in a tabular format.*/
#include<stdio.h>
int main()
{
    int roll[100],mark[100],i,n;
    char name[100][100];
    printf("Enter number of student:");
    scanf("%d",&n);
    printf("Enter Roll number, name and mark of each student one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d",&roll[i],(char *)&name[i],&mark[i]);
    }
    printf("Roll Number\tName\tMark\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t%d\n",roll[i],name[i],mark[i]);
    }
    return 0;
}