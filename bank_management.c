/*24. A person has an account in a bank. Write a program using switch case that allows
user to
perform the following operations until the person select exit.
1. Display Balance
2. Withdraw Money (if balance not suffcient display error message and exit)
3. Deposit Money
4. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    static int balance=0;
    int ch,amnt;
    while(1)
    {
        printf("1.Display th Balance\n2.Withdraw Money\n3.Deposit Money\n4.Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Your Account  Balance = %d\n",balance);
                break;
            case 2:
                printf("Enter the amount of Money you want to withdraw:");
                scanf("%d",&amnt);
                if(balance>=amnt)
                {
                    printf("Please Collect your money %d\n",amnt);
                    balance-=amnt;
                }
                else
                    printf("Insufficient Balance %d in your account\n",amnt);
                break;
            case 3:
                printf("Enter the amount of money you want to deposit:");
                scanf("%d",&amnt);
                balance+=amnt;
                printf("%d amount of money is deposited in to your account\n",amnt);
                break;
            case 4:
                exit(0);
            default:
                printf("You have entered invalid choice, Please try again");
        }
    }
    return 0;
}