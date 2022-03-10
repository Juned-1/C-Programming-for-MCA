#include<stdio.h>
int main()
{
    int num,r,i;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Two right most digit are ");
    for(i=0;i<2;i++){
        r=num%10;
        num=num/10;
        printf("%d ",r);
    }
    printf("\n");
    return 0;
}