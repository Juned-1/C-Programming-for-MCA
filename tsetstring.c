#include<stdio.h>
int main()
{
    char str[]="Tezpur",c;
    short i,m=sizeof(str),k;
    for(i=0,k=m-2;i<m-2;i++,k--){
        str[i]=str[k];
        printf("%d\t",str[i]);
        str[k]=str[i];
        printf("%d\n",str[k]);
    }
    printf("\n%s\n",str);
    return 0;
}