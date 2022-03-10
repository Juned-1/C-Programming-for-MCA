/*4. WAP to store the name and marks obtained by the five students. Sort the marks from highest
lo lowest and display the list of the students and their respective marks according to their rank
order*/
#include<stdio.h>
#include<string.h>
int main()
{
    int mark[100],i,j,n;
    char name[100][100],temp[100];
    printf("Enter number of student:");
    scanf("%d",&n);
    printf("Enter Name and mark of each student one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d",(char *)&name[i],&mark[i]);
    }
    //Sorting -- Bubble sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(mark[j]<mark[j+1]) //since sorting in decreasing order, hence comparing a<b
            {
                //swa[ing marks]
                mark[j]=mark[j]+mark[j+1]-(mark[j+1]=mark[j]); //swaping--> a=a+b-(b=a)
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    printf("Student according to rank\n");
    printf("Name\tMarks\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\n",name[i],mark[i]);
    }
    return 0;
}