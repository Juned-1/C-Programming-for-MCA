/*2. Write a program using pointers to input and print array elements.*/
#include<stdio.h>
int main()
{
    int *arr,i,n;
    printf("Enter number of element in array:");
    scanf("%d",&n);
    printf("Enter element of array one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("Elments in array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}