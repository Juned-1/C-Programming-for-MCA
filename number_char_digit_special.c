#include<stdio.h>
int main()
{
    char str[50];
    int alphabet=0,digit=0,spl=0,i;
    printf("Enter a string with character, digit and special symbol:\n");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z'))
            alphabet++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else
            spl++;
    }
    printf("Number of character= %d\nNumber of digit= %d\nNumber of special character= %d\n",alphabet,digit,spl);
    return 0;
}