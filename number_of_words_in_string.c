#include<stdio.h>
int main()
{
    int i,words=0;
    char str[50];
    printf("Enter a String:");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            words++;
    }
    printf("Number of words in string is %d\n",words+1);
    return 0;
}