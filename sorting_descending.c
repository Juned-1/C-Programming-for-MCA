/*9.Write a program in C to sort elements of the array in descending order.*/
#include<stdio.h>
int main()
{
    int arr[100],i,j,n;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter elements of array one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements before sorting are:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    //sorting
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
                arr[j]=arr[j]+arr[j+1]-(arr[j+1]=arr[j]); //a=a+b-(b=a)
        }
    }
    printf("\nElements in array after sorting are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}