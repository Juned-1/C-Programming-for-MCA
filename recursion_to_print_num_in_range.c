#include<stdio.h>
int print_num(int,int);
int main()
{
    int s,e;
    printf("Enter the range:");
    scanf("%d %d",&s,&e);
    print_num(s,e);
    printf("\n");
}
int print_num(int s,int f){
    
    if(s<=f){
        printf("%d\t",s);
        return print_num(s+1, f);
    }
    
    else
        return 0;

}