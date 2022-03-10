#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=8;i++)
    {
        if(i==1||i==8)
            printf("  ####\n");
        else if(i==2||i==7)
            printf("##    ##\n");
        else
            printf("##\n"); 
    }
}