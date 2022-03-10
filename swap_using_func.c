#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    printf("Values before swaping are %d %d\n",a,b);
    swap(&a,&b);
    printf("Value after swaping are %d %d\n",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}