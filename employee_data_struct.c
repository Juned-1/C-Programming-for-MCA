/* 2. Define a structure type, struct personal that would contain person name, date of joining and salary.
Using this structure, write a program to read this information for one person from the keyboard and
print the same on the screen.*/
#include<stdio.h>
struct personal{
    char name[50],doj[50];
    int sal;
}typedef person;
int main()
{
    person p;
    printf("Enter name, Date of Joining and salary of person:\n");
    scanf("%s %s %d",p.name,p.doj,&p.sal);
    printf("Person Detail:\n");
    printf("Name\tDate of Joining\t\tSalary\n");
    printf("%s\t%s\t\t%d\n",p.name,p.doj,p.sal);
    return 0;
}