/*18(b) Write a program in C to Find the Frequency of Character say ‘i’ in a string.*/
#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    printf("Enter a character to find frequency of it:");
    scanf(" %c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
            count++;
    }
    printf("Frequency of %c = %d\n",ch,count);
    return 0;
}