//questin 2. Write a C program to print all uppercase alphabets from ‘A’ to ‘Z’.
#include<stdio.h>
int main()
{
    char ch='A';
    printf("Alphabet from A to z are:\n");
    while(ch<='Z')
    {
        printf("%c ",ch);
        ch++;
    }
    printf("\n");
    return 0;
}