/*2. Create an array of structures to store information (roll_no, name, department, age) of five
students.*/
#include<stdio.h>
struct student{
    int rlno,age;
    char name[20],dept[20];
}typedef student;
int main()
{
    student s[5];
    int i;
    printf("Enter Roll. No, name, age and department of students:\n");
    for(i=0;i<5;i++)
    {
        printf("Student %d:",i+1);
        scanf("%d %s %d %s",&s[i].rlno,s[i].name,&s[i].age,s[i].dept);
    }
    printf("Student details are:\n");
    printf("Roll. No\tName\tAge\tDepartment\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t\t%s\t%d\t%s\n",s[i].rlno,s[i].name,s[i].age,s[i].dept);
    }
    printf("\n");
    return 0;
}