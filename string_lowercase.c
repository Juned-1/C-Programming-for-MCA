//Converting upper case string to lower case
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
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("Lowercase string: %s\n",str);
    return 0;
}