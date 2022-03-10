#include<stdio.h>
#include<string.h>
int main()
{
   char str[50];
   printf("Enter a string:");
   scanf("%[^\n]",str);
   printf("The given string is =%s\n",str);
   printf("After reversing string is = %s\n",strrev(str));
   return 0;
}