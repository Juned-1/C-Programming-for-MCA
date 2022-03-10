/*23. Write C program to find maximum and minimum elements in array using functions.
E.g min(array) and max(array). Then find the difference between max and min using
function diff (max, min).*/
#include<stdio.h>
int minimum(int [],int);
int maximum(int [],int);
int diff(int,int);
int main()
{
    int arr[100],i,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements of array one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Minumum = %d\nMaximun = %d\n",minimum(arr,n),maximum(arr,n));
    printf("Difference of Maximum and Minimum = %d\n",diff(maximum(arr,n),minimum(arr,n)));
    return 0;
}
int minimum(int a[],int n)
{
    int min=a[0],i;
    for(i=1;i<n;i++)
        min = min < a[i] ? min : a[i];
    return min;

}
int maximum(int a[],int n)
{
    int max=a[0],i;
    for(i=1;i<n;i++)
        max = max > a[i] ? max : a[i];
    return max;
}
int diff(int a,int b)
{
    return a-b;
}