/*16. Write a program that allows user to enter a password and check if it contains
Capital Alphabets, Small Alphabets, Numbers and Special Characters. If it does not
contain all of the criteria ask the user to enter password again. (hint use ascii to
check conditions)*/
#include<stdio.h>
int main()
{
    int n,i,low,up,digit,spch;
    char pass[100];
    do{
        low=0;
        up=0;
        spch=0;
        digit=0;
        printf("Enter a password(include capital,small,digit and special symbol):");
        scanf("%s",pass);
        for(i=0;pass[i]!='\0';i++)
        {
            if(pass[i]>='a'&&pass[i]<='z')
                low=1;
            else if(pass[i]>='A'&&pass[i]<='Z')
                up=1;
            else if(pass[i]>='0'&&pass[i]<='9')
                digit=1;
            else
                spch=1;
        }
    }while(low==0||up==0||digit==0||spch==0);
    if(low&&up&&digit&&spch)
        printf("Password is Okay\n");
    return 0;
}