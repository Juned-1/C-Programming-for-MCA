/*21. a) Write a program to remove spaces from a string.*/
#include<stdio.h>
int main()
{
    char str[100];
    int i,j;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            for(j=i;str[j]!='\0';j++)
                str[j]=str[j+1];
    }
    printf("String after removing space is:\n%s\n",str);
    return 0;
}