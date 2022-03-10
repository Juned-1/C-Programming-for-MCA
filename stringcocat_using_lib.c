#include<stdio.h>
#include<string.h>
int main()
{
    char source[50],target[50];
    printf("Enter two strings:\n");
    scanf("%s %s",target,source);
    strcat(target,source); //strcat() concatenate source string at the end of target string
    printf("Source String: %s\n",source);
    printf("Target String: %s\n",target);
    return 0;
}