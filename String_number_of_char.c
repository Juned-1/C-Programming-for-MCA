/*17. Write a program that takes string from user and display the number of Capital
Alphabets, Small Alphabets, Numbers and Special Characters present in it. (hint
use ascii to check conditions) Also find the number of characters in the string.*/
#include<stdio.h>
int main()
{
    char str[100];
    int i,digit=0,sm=0,big=0,spcl=0,count=0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
             big++;
        else if(str[i]>='a'&&str[i]<='z')
            sm++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else
            spcl++;
        count++;
    }
    printf("Number of Ca[ital letter = %d\n",big);
    printf("Number of small letter = %d\n",sm);
    printf("Numberf of digit = %d\n",digit);
    printf("Numberf of special symbol = %d\n",spcl);
    printf("Numberf of Character = %d\n",count);
    return 0;

}