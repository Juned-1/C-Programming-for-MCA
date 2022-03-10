/*1. Write a C program to print a block F using hash (#), where the F has a height of six
characters and width of five and four characters. And also to print a big 'C'.*/
#include<stdio.h>
int main()
{
    //row=6,column=5
    int i,j;
    for(i=1;i<=6;i++)
    {
        if(i==1||i==3)
        {
            for(j=0;j<5;j++)
            {
                printf("# ");
            }
            printf("\n");
        }
        else
        {
            printf("#\n");
        }
    }
    return 0;
}