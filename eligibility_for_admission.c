/*Write a C program to find the eligibility of admission for a professional course based
on the following criteria:
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=190
or
Total in Math and Physics >=140*/
#include<stdio.h>
int main()
{
    int phys,chem,math;
    printf("Enter marks of physics,chemistry and mathematics:");
    scanf("%d %d %d",&phys,&chem,&math);
    if((math>=65&&phys>=55&&chem>=50)&&((math+phys+chem)>=190))
        printf("Admission successful\n");
    else if((math+phys)>=140)
        printf("Admission Successful\n");
    else
        printf("Sorry, You are not eligible for admission\n");
    return 0;
}