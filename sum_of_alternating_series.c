#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
    float sum=1,term =1,m,x;
    int n,i,y=1;
    printf("Enter nth number up to which series will conrinue:");
    scanf("%d",&n);
    printf("x=");
    scanf("%f",&x);
    for(i=1;i<n;i++){
        term = term*(-1);
        m = term*(pow(x,y)/fact(y+1));
        sum+=m;
        y+=2;
    }
    printf("Sum of series = %.2f\n",sum);
    return 0;
}
int fact(int n)
{
    int fact = 1,i;
    for(i=1;i<=n;i++)
        fact*=i;
    return fact;
}