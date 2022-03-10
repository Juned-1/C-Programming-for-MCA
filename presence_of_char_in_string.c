/*18. a) Write a program to check if a given character is present in a string.*/
#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,flag=0;
    printf("Enter a string:");
    scanf("%s",str);
    printf("Enter a character to search:");
    scanf(" %c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("%c is found in position %d\n",ch,i+1);
    else
        printf("%c is not found in string\n",ch);
    return 0;
}