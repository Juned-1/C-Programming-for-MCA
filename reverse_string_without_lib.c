#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i,j,len=0;
    printf("Enter a string:");
    scanf("%[^\n]",str1);
    while(str1[len]!='\0')
    {
        len++; //calculating length of string
    }
    /*end = len-1;
    start=0;
    while(start<len){
        str2[start]=str1[end];
        start++;
        end --;
    }
    str2[start]='\0';
    */
    for(i=0,j=len-1;i<len;i++,j--)
    {
        str2[i]=str1[j];
    }
    str2[i]='\0';
    printf("Original String: %s\n",str1);
    printf("Reversed String: %s\n",str2);
    return 0;
}