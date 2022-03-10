#include<stdio.h>
int main()
{
    char str1[50],str2[50],str3[50];
    int i=0,j=0,k=0;
    printf("Enter two strings:");
    scanf("%s %s",str1,str2);
    while(1)
    {
        if(str1[i]!='\0')
        {
            str3[k]=str1[i];
            i++;
            k++;
        }
        else
        {
            str3[k]=str2[j];
            j++;
            k++;
        }
        if(str3[k-1]=='\0')
            break;
    }
    printf("Concatenated string: %s\n", str3);
    return 0;
}