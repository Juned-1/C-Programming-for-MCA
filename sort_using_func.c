#include<stdio.h>
void sort(int *,int);
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
    printf("Values before sorting are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    sort(&arr[0],n);
    printf("\nValues after sorting are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
void sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}