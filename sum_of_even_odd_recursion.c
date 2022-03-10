#include<stdio.h>
int print_even(int,int);
int print_odd(int,int);
int sum=0;
int main()
{
    int s,e;
    printf("Enter the range:");
    scanf("%d %d",&s,&e);
    printf("Sum of even number = %d\n",print_even(s,e));
    sum=0;
    printf("Sum of odd number = %d\n",print_odd(s,e));
    return 0;
}
int print_even(int s,int f){
    if(s<=f){
        if(s%2==0){
            sum+=s;
        }
        return print_even(s+1,f);
    }
    return sum;
}
int print_odd(int s,int f){
    if(s<=f){
        if(s%2!=0){
            sum+=s;
        }
        return print_odd(s+1,f);
    }
    return sum;
}