#include<stdio.h>
int main()
{
    float rice,sugar;
    printf("Enter the price of rice and sugar:");
    scanf("%f %f",&rice,&sugar);
    printf("***LIST ITEM***\n");
    printf("Item\tPrice\nRice\tRs.%.2f\nSugar\tRs.%.2f\n",rice,sugar);
    return 0;
}