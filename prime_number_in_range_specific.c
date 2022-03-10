/*26. Write a program that takes a given range from a user and using a function prints
the 1st, 5th and the last prime number within that range.*/
#include<stdio.h>
int prime(int,int,int);
int main()
{
    int m,n;
    printf("Enter Range of Prime:");
    scanf("%d %d",&m,&n);
    printf("1st, 5th and last prime number in range(%d,%d) are:",m,n);
    printf("%d %d %d\n",prime(m,n,1),prime(m,n,5),prime(m,n,0));/*for last term by default passing 0 as count*/
    return 0;
}
int prime(int m,int n,int cnt)
{
    int i,j,flag,lcnt=0,lp;
    for(i=m;i<=n;i++)
    {
        if(i==1||i==0)
            continue;
        flag = 1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            if(cnt==0)
                lp=i;
            else
            {
                lcnt++;
                if(lcnt==cnt)
                    return i;
            }
        }
    }
    return lp; /*lp is last prime number*/
}