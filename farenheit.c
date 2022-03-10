#include<stdio.h>
int main()
{
    float f,c;
    int choice;
    printf("In which format do you want to enter temperature?\n1.Farenheit\n2.Celsius\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter temperature in Farenheit:");
        scanf("%f",&f);
        printf("Temperature is celsius is %.2f\n",(f-32)*5/9);
    }
    else if(choice==2)
    {
        printf("Enter temperature in Celsius:");
        scanf("%f",&c);
        printf("Temperature in Farenheit is %.2f\n",(c*9/5)+32);
    }
    else 
        printf("You have entered wrong choice! please try again.\n");
    return 0;
}