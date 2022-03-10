/*b) Write a program to check if the string entered by user are numbers. If true count
the number of characters in string (hint use ascii code)*/
#include<stdio.h>
int main()
{
    char str[100];
    int i,flag = 0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        printf("String is Number\n");
        for(i=0;str[i];i++)
            ;
        printf("Number of Character = %d\n",i);
    }
    else
        printf("String is not Number\n");
    return 0;
}