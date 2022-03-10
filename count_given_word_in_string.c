/*19. Write a program in C to find the number of times a given word 'the' appears in the
given string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch[]="the", cmp[100];
    int i,j,count=0,word=0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    /*printf("Enter a character to find frequency of it:");
    scanf(" %c",&ch);*/
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')
            word++;
    }
    word++;
    printf("Words= %d\n",word);
    for(i=0;i<word;i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==' '||str[j]=='\0')
            {
                cmp[j]='\0';
                break;
            }
            cmp[j]=str[j];
        }
        //if(!strcmp(ch,cmp))//strcmp return 0 if string are equal
        //    count++;
        printf("%s\n",cmp);
    }
    //printf("Frequency of \'%s\' = %d\n",ch,count);
    return 0;
}