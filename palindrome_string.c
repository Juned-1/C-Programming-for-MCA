/*22. Write a program using functions that checks if the string given by user is a
palindrome. If it is a palindrome, display on the screen only if the length of string is
between 5 to 10 else do not display the string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,flag = 1;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    for(i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag = 0;
            break;
        }
    }
    if(flag && (strlen(str)>=5&&strlen(str)<=10))
    {
        printf("\"%s\" is plaindrome and among length between 5 and 10\n",str);
    }
    else
        printf("String is either not palindrome or not between length 5 to 10\n");
    return 0;
}