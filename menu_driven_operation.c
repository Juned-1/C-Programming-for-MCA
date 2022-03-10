#include<stdio.h>
int main()
{
    int n,ch;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Chose an operation\nPress 1:Check even odd\nPress 5:Check positive negative\nPress 10:Check divisibility by 5\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            switch(n%2==0)
            {
                case 1:
                    printf("%d is even\n",n);
                    break;
                default:
                    printf("%d is odd\n",n);
            }
            break;
        case 5:
            switch(n<0)
            {
                case 1:
                    printf("%d is negative\n",n);
                    break;
                case 0:
                    switch(n>0)
                    {
                        case 1:
                            printf("%d is positive\n",n);
                            break;
                        default:
                            printf("%d is neither positive nor negative\n",n);
                    }
            }
            break;
        case 10:
            switch(n%5==0)
            {
                case 1:
                    printf("%d is divisible by 5\n",n);
                    break;
                default:
                    printf("%d is not divisible by 5\n",n);
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}