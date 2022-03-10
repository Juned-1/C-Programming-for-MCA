#include<stdio.h>
int rem,sum=0;
int reverse_function(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Reverse number = %d\n",reverse_function(n));
    return 0;
}
int reverse_function(int num){
   
   if(num!=0){          
      rem=num%10;           
      sum=sum*10+rem;       
      reverse_function(num/10);
   }
//   else
//       return sum;
   return sum;
}