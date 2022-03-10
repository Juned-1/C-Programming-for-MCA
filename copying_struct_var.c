/*3. Write a program to copy and compare two structure variables of the structure student created in
first program.*/
#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        char name[50],dept[50];
        int id,age;
    };
    struct student s1 = {"Juanid","CS",10,22},s2;
    s2 = s1; //copying all the value of s1 to s2
    printf("S1 = %s %s %d %d\n",s1.name,s1.dept,s1.id,s1.age);
    printf("S2 = %s %s %d %d\n",s2.name,s2.dept,s2.id,s2.age);
    if((strcmp(s1.name,s2.name)==0)&&(strcmp(s1.dept,s2.dept)==0)&&(s1.id==s2.id)&&(s1.age==s2.age))
        printf("S1 and S2 are equal\n");
    else
        printf("S1 and S2 are not equal\n");
    return 0;
}