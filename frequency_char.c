#include<stdio.h>
#include<string.h>
int main()
{
    int len,count=0,flag=0,i;
    char str[50],ch;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    printf("Enter a character to check its frequency:");
    scanf(" %c",&ch);
    len=(int)strlen(str);
    for(i=0;i<len;i++)
    {
        if(ch==str[i])
        {
            count++;
            flag=1;
        }
    }
    if(flag)
        printf("Frequency of %c is %d\n",ch,count);
    else
        printf("%c is not found in string\n",ch);
    return 0;
}