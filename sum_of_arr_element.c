//4. Write a program in C to print the sum of the elements of an array.
#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0;
    printf("Enter number of element in array:");
    scanf("%d",&n);
    printf("Enter elements one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("Sum = %d\n",sum);
    return 0;
}