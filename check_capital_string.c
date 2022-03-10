/*20.a) Write a program to check if the string entered by user are captial letters. If true
count the number of characters in string (hint use ascii code)*/
#include<stdio.h>
int main()
{
    char str[100];
    int i,flag = 0;
    printf("Enter a String:");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        printf("\"%s\" is Capital\n",str);
        for(i=0;str[i]!='\0';i++)
            ;
        printf("Number of character = %d\n",i);
    }
    else
        printf("\"%s\" is not capital\n",str);
    return 0;
}