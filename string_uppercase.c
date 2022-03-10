//converting from lower case to upper case
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    printf("Original string: %s\n",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("Uppercase string: %s\n",str);
    return 0;
}