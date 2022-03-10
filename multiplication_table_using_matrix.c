/*4. Write a program to compute and print multiplication table for numbers 1 to 5 as shown below:*/
#include<stdio.h>
int main()
{
    int prod[5][5],i,j,val1=1,val2;
    printf("\t\tMultiplication Table\n");
    //formatting
    printf(" |\t");
    for(i=1;i<=5;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    for(i=1;i<=50;i++)
    {
        printf("_");
    }
    printf("\n");
    //calculating  and printing the table
    for(i=0;i<5;i++)
    {
        printf("%d|\t",i+1);
        val2=1;
        for(j=0;j<5;j++)
        {
            prod[i][j]=val1*val2;
            val2++;
            printf("%d\t",prod[i][j]);
        }
        val1++;
        printf("\n");
    }
    return 0;
}