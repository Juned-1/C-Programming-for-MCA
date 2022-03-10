//array as function -- array is always call by refernce in function
#include<stdio.h>
void modify(int,int []);
int main()
{
    int n=5,arr[]={1,2,3,4,5},i;
    printf("Elements in array are:");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    modify(n,arr);
    printf("Elements in array after modification are:");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void modify(int n,int list[])
{
    list[2] = 10;
}