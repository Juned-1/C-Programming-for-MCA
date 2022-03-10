#include<stdio.h>
int main()
{
    int a[2][2],n,i,j,r,c;
    printf("Enter number of row and column:");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix one by one:\n");
    for(i=0;i<r;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    printf("Elements of matrix one by one:");
    for(i=0;i<r;i++)
        for(j=0;j<4;j++)
            printf("%d",a[i][j]);
    return 0;
}