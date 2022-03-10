//2. WAP in C to sort numbers in an array.
#include<stdio.h>
int main()
{
    int a[50],n,i,j;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter elements one by one:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elments in array before sorting are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //Sorting -- Bubble sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
                a[j]=a[j]+a[j+1]-(a[j+1]=a[j]); //swaping--> a=a+b-(b=a)
        }
    }
    printf("\nElements of array after sorting are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}