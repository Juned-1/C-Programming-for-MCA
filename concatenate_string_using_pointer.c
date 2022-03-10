#include<stdio.h>
int main()
{
    char str1[50],str2[50],*p1,*p2;
    printf("Enter two string:");
    scanf("%[^\n] %[^\n]",str1,str2);
    p1=str1;
    p2=str2;
    while(*p1!='\0')
        p1++;
    while(*p1++=*p2++);
    printf("Concatenated string = %s\n",str1);
    return 0;
}