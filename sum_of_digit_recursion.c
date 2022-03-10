#include<stdio.h>
int sum=0;
int reverse_function(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of digit = %d\n",reverse_function(n));
    return 0;
}
int reverse_function(int num){
   if(num!=0){                   
      sum+=num%10;      
      reverse_function(num/10);
   }
   return sum;
}