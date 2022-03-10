//1. Write a program in C to create an array of size 10 and enter 10 elements.
#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter 10 elements of array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element in array are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}