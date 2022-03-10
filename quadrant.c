/*Write a C program to accept a coordinate point in a XY coordinate system and
determine in which quadrant the coordinate point lies.*/
#include<stdio.h>
int main()
{
    int x,y; //first quadrant, x and y +ve, second quadrant y is +ve x, -ve
    printf("Enter coordinate of points:");
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
        printf("(%d,%d) is at first quadrant\n",x,y);
    else if(x<0&&y>0)
        printf("(%d,%d) is at second quadrant\n",x,y);
    else if(x<0&&y<0)
        printf("(%d,%d) is at third quadrant\n",x,y);
    else if(x>0&&y<0)
        printf("(%d,%d) is at fourth quadrant\n",x,y);
    else
        printf("(%d,%d) is at origin\n",x,y);
    return 0;
}