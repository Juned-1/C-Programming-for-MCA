/*question 4. Write a program to read ages of 5 person and find how many of them fall under the
categories: still a baby: age 0 to 4, school going: 5-17, adult: 18 and over using while
loop.*/
#include<stdio.h>
int main()
{
    int b=0,sg=0,a=0,i=1,flag=0,age;
    printf("Enter age of 5 person one by one:\n");
    while(i<=5)
    {
        scanf("%d",&age);
        if(age<0)
        {
            printf("Invalid age, Please try again\n");
            flag=1;
            break;
        }
        else if(age>=0&&age<=4)
            b++;
        else if(age>=5&&age<=17)
            sg++;
        else
            a++;
        i++;
    }
    if(!flag)
        printf("Number of baby=%d\nNumber of School going=%d\nNumber of Adult=%d\n",b,sg,a);
    return 0;
}