#include<stdio.h>
int add(int,int);
int sub(int,int);
int multi(int,int);
float div(int,int);
int rem(int,int);
int main()
{
    int a,b,ch;
    printf("Enter two value:");
    scanf("%d %d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplcation\n4.Division\n5.Remainder\n");
    printf("Chose an operation:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Result= %d\n",add(a,b));
            break;
        case 2:
            printf("Result= %d\n",sub(a,b));
            break;
        case 3:
            printf("Result= %d\n",multi(a,b));
            break;
        case 4:
            printf("Result= %.2f\n",div(a,b));
            break;
        case 5:
            printf("Result = %d\n",rem(a,b));
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int multi(int x,int y)
{
    return x*y;
}
float div(int x,int y)
{
    return x/y;
}
int rem(int x,int y)
{
    return x%y;
}