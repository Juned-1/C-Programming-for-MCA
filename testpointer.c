#include<stdio.h>
void change(char []);
int main()
{
    char x[10], *ptr=x;
    scanf("%s",x);
    change(&x[4]);
}
void change(char a[])
{
    puts(a);
}