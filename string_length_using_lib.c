#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    printf("Enter a string:");
    scanf("%[^\n]",str1);
    printf("Length of string is %d\n",(int)strlen(str1));
    return 0;
}