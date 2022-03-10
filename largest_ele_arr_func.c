#include<stdio.h>
int larg(int [],int);
int main()
{
    int n,i,arr[100];
    printf("Enter number of element in array:");
    scanf("%d",&n);
    printf("Enter array element one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Largest = %d\n",larg(&arr[0],n));
    return 0;
}
int larg(int a[],int n)
{
    int max,i;
    max=a[0];
    for(i=1;i<n;i++)
    {
        max=a[i]>a[i-1]?a[i]:a[i-1];
    }
    return max;
}