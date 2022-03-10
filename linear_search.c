//5. Write a Program in C that asks from user to enter any 10 array elements, and then ask to
//enter a number to search from the given array.
#include<stdio.h>
int main()
{
    int n,arr[100],i,key,flag=0;
    printf("Enter number of element in array:");
    scanf("%d",&n);
    printf("Enter array elements one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element ot be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("%d is found at position %d\n",key,i+1);
            flag=1;
            break;
        }
    }
    if(!flag)
        printf("%d is not found in the array\n",key);
    return 0;
}