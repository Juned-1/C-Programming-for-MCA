#include<stdio.h>
int main()
{
    char str[50];
    int length=0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    while(str[length]!='\0')
    {
        length++;
    }
    printf("Length of the string is %d\n",length);
    return 0;
}