#include<stdio.h>
int main()
{
    int roll[100],mark[100],i,j,n,rl,count=0;
    char name[100][100];
    printf("Enter number of student:");
    scanf("%d",&n);
    printf("Enter Roll number, name and mark of each student one by one:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter roll number:");
        scanf("%d",&rl);
        for(j=0;j<count;j++)
        {
            if(rl==roll[j])
            {
                printf("This roll number is already assigned, Please enter new one:");
                scanf("%d",&rl);
                break;
            }
        }
        roll[i]=rl;
        printf("Enter name and marks:");
        scanf("%s %d",(char *)&name[i],&mark[i]);
        count++;
    }
    printf("Roll Number\tName\tMark\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t%d\n",roll[i],name[i],mark[i]);
    }
    return 0;
}