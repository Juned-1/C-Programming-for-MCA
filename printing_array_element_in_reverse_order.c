/*Write a program in C to read n number of values in an array and display it in
reverse order.*/
#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Entetr number of array element:");
    scanf("%d",&n);
    printf("Enter array elements one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array element in reverse order are:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}