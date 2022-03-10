#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp[50],w[10],*p;
    int count=0;
    printf("Enter the string:");
    scanf("%[^\n]",str);
    strcpy(temp,str);
    printf("%s\n",str);
    p=temp;
    while(*p!='\0'){
        if(*p==' ')
            *p='\0';
        p++;
    }
    printf("Enter the word to search:");
    scanf("%s",w);
    p=temp;
    do{
        if(strcmp(p,w)==0)
            count++;
    }
    return 0;
}