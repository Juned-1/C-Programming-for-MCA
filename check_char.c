#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9')
        printf("%c is digit\n",ch);
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("%c is alphabet\n",ch);
    else
        printf("%c is special synbol\n",ch);
    return 0;
}