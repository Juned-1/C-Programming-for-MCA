#include<stdio.h>
int reverse(int,int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d\n",reverse(num,0));
    if(num==reverse(num,0))
        printf("%d is Palindrome\n",num);
    else
        printf("%d is not palindrome\n",num);
    return 0;
}
int reverse(int n1,int n2)
{
    if(n1==0){
        return n2;
    }
    n2=n2*10+n1%10;
    return reverse(n1/10,n2);
}