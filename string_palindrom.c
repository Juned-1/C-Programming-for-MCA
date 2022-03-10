#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j,len;
    printf("Enter a string:\n");
    scanf("%[^\n]",str);
    len=(int)strlen(str);
    for(i=0,j=len-1;i<=j;i++,j--)
    {
        if(str[i]!=str[j])
            break;
    }
    if(i>j)
        printf("String \'%s\' is palindrom\n",str);
    else
        printf("String \'%s\' is not palindrom\n",str);
    return 0;
}