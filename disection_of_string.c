#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],part[100][100],*split;
    int i=0,countr=0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    split=strtok(str," ");
    while(split!=NULL)
    {
        countr++;
        strcpy(part[i],(char *)split);
        split=strtok(NULL," ");
        i++;
    }
    printf("Count = %d\n",countr);
    for(i=0;i<countr;i++)
    {
        printf("%s\n",part[i]);
    }
    printf("Result = %s\n",str);
    printf("We got only first word of string in the end because strtok manipulate original string\n");
    printf("And put NULL in each place of delimeter\n");
    return 0;
}