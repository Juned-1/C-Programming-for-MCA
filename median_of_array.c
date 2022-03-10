//3. WAP in C to find the median of an array.
#include<stdio.h>
int main()
{
    int a[50],n,i,j;
    float mid;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter elements one by one:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //arranging list in ascending order before finding median
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
                a[j]=a[j]+a[j+1]-(a[j+1]=a[j]); //swaping--> a=a+b-(b=a)
        }
    }
    if(n%2==0)/*for even observation median is [(n/2)+(n/2+1)]/2, but since in array index start from
                0, hence it is [(n-1)/2+n/2]/2 element  */
        printf("Median = %.2f\n",(float)((a[(n-1)/2]+a[n/2])/2.00));
    else /*for odd observation median is (n+1)/2th observation, but since array index start from 0, 
            hence it is n/2th element*/
        printf("Median = %.2f\n",(float)a[n/2]);
    return 0;
}