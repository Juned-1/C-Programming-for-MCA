#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter a string:");
    scanf("%s",str1);
    strcpy(str2,str1);
    printf("Original String: %s\n",str1);
    printf("Duplicate String: %s\n",str2);
    return 0;
}