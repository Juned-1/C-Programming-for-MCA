#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],*fp,*lp;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    for(fp = str,lp = str+strlen(str)-1;*fp==*lp;fp++,lp--){
        if(fp>lp)
            break;
    }
    if(fp>lp)
        printf("\'%s\' is Palindrome\n",str);
    else
        printf("\'%s\' is not Palindrome\n",str);
    return 0;
}