/*4. Write a program using pointers to swap two arrays.*/
#include<stdio.h>
int main()
{
    int arr[100],arr2[100],i,n,*p1,*p2,temp;
    printf("Enter number of element in array:");
    scanf("%d",&n);
    printf("Enter element of array 1 one by one:\n");
    p1=arr;
    p2=arr2;
    for(i=0;i<n;i++)
    {
        scanf("%d",p1+i);
    }
    printf("Enter element of array 2 one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p2+i);
    }
    printf("Elements of array 1 before swaping are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\n");
    printf("Elements of array 2 before swaping are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p2+i));
    }
    printf("\n");
    //swaping
    for(i=0;i<n;i++)
    {
        temp=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=temp;
    }
    printf("Elements of array 1 after swaping are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\n");
    printf("Elements of array 2 after swaping are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p2+i));
    }
    printf("\n");
    return 0;
}