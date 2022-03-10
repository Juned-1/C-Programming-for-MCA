/*17. Write a program that takes string from user and display the number of Capital
Alphabets, Small Alphabets, Numbers and Special Characters present in it. (hint
use ascii to check conditions) Also find the number of characters in the string.*/
#include<stdio.h>
int main()
{
    int i,low=0,up=0,spch=0,digit=0;
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            low++;
        else if(str[i]>='A'&&str[i]<='Z')
            up++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else
            spch++;
    }
    printf("Number of Small letter= %d\nNumber of capital letter= %d\n",low,up);
    printf("Number of digit= %d\nNumber of Special character= %d\n",digit,spch);
    return 0;
}