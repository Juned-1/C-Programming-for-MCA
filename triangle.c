#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter three sides of triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3 && s1==s3)
        printf("Triangle is equilateral\n");
    else if(s1==s2||s1==s3||s2==s3)
        printf("Triangle is isosceles\n");
    else
        printf("Triangle is scalene\n");
    return 0;
}