#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter two string:");
    scanf("%s %s",str1,str2);
    if(strcmp(str1,str2)==0)
        printf("String are same\n");
    else
        printf("String are not same\n");
    return 0;
}