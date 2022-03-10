/*19. Write a program in C to find the number of times a given word 'the' appears in the
given string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],part[100][100],temp[100],*split;
    int i=0,countr=0,wcnt=0;
    printf("Enter a String: ");
    scanf("%[^\n]",str);
    strcpy(temp,str);
    split=strtok(temp," ");
    while(split!=NULL)
    {
        countr++;
        strcpy(part[i],(char *)split);
        split=strtok(NULL," ");
        i++;
    }
    for(i=0;i<countr;i++)
    {
        if(!strcmp(part[i],"the"))
            wcnt++;
    }
    printf("\'the\' is found %d time in the string \'%s\'\n",wcnt,str);
    return 0;
}