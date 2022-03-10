//question 5. Write a C program to check if an entered number is zero, positive or negative until
//user does not want to exit using do..while.
#include<stdio.h>
int main()
{
    int num;
    char ch;
    do
    {
        printf("Enter a number:");
        scanf("%d",&num);
        if(num>0)
            printf("%d is positive\n",num);
        else if(num<0)
            printf("%d is negative\n",num);
        else
            printf("%d is neither positive nor negative\n",num);
        printf("Enter q to quit, enter other character to continue:\n");
        fflush(stdin);
        scanf(" %c",&ch);
    }while(ch!='q');
    return 0;
}