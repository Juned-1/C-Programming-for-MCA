#include<stdio.h>
void findPrime(int,int);
int main()
{
    int start,end;
    printf("Enter the range:");
    scanf("%d %d",&start,&end);
    findPrime(start,end);
    return 0;
}
void findPrime(int s,int e)
{
    int i,j,flag,h;
    for(i=s;i<=e;i++)
    {
        flag=0;
        h=i/2;
        for(j=2;j<=h;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",i);
    }
    printf("\n");
}