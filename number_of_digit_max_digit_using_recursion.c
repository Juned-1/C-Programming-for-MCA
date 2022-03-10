#include<stdio.h>
int countDigit(int);
int maximum(int,int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Number of digit in\'%d\' = %d\n",num,countDigit(num));
    printf("Largest digit in \'%d\' = %d\n",num,maximum(num,0));
    return 0;
}
int countDigit(int n){
    static int count=0;
    if(n==0)
        return count;
    count++;
    return countDigit(n/10);
}
int maximum(int n,int max){
    if(n==0)
        return max;
    max = max > n%10 ? max : n%10;
    return maximum(n/10,max);
}