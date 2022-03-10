#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i=0,flag=1;
    printf("Enter two strings:\n");
    scanf("%[^\n] %[^\n]",str1,str2);
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            printf("String 1 and String 2 are not identical\n");
            flag = 0;
            break;
        }
        i++;
    }
    if(flag)
        printf("String 1 and String 2 are identical\n");
    return 0;
}