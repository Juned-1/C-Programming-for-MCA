#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;
    int count=0,i,j,len,flag[50];
    printf("Enter a string:");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
        flag[i]=0;
    for(i=0;i<len;i++)
    {
        ch=str[i];
        if(flag[i]==0)
        {
            for(j=0;j<len;j++)
            {
                if(ch==str[j])
                {
                    count++;
                    flag[j]=1;
                }
            }
            printf("Frquency of %c = %d\n",ch,count);
        }
        count=0;
    }
    printf("\n");
    return 0;
}