/*1. Define a structure student with members- name, id, age, department and print the values for 3
students.*/
#include<stdio.h>
struct student{
    char name[50],dept[50];
    int id,age;
};
int main()
{
    struct student s[3];
    int i;
    printf("Enter id, name, age and department of students:\n");
    for(i=0;i<3;i++)
    {
        printf("Student %d:",i+1);
        scanf("%d %s %d %s",&s[i].id,s[i].name,&s[i].age,s[i].dept);
    }
    printf("Student details are:\n");
    printf("Id\tName\tAge\tDepartment\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].dept);
    }
    printf("\n");
    return 0;
}