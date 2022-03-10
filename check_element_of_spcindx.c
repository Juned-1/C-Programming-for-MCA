//2. Write a program in C to read 5 elements in an array and print element present at third position of the array.
#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter five element one by one:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element of 3rd position= %d\n",arr[2]);
    return 0;
}