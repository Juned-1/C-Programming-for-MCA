//3. Write a program in C, that asks from user to enter size and elements for a one-dimensional
//array, and print it back as output.
#include<stdio.h>
int main()
{
    int n,arr[100],i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter element of array one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Size of array is %d\n",n);
    printf("Element in array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}