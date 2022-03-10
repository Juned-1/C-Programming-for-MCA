#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    printf("Enter operand 1 operator and oparand 2(Valid operator are +,-,*,/):");
    scanf("%d %c %d",&num1,&op,&num2);
    switch(op)
    {
        case '+':
            printf("%d+%d=%d\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d-%d=%d\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d*%d=%d\n",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d/%d=%d\n",num1,num2,num1/num2);
            break;
        default:
            printf("Invalid operator! try again...\n");
    }
    return 0;
}