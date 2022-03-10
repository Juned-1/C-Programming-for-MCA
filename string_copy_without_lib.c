#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i;
    printf("Enter a string:\n");
    scanf("%[^\n]",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("String 1: %s\nString 2: %s\n",str1,str2);
    return 0;
}