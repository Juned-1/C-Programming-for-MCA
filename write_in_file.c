#include<stdio.h>
int main()
{
    FILE * file;
    char str[] = "My age is ";
    char name[] ="My Name is Junaid";
    int age;
    if(file = fopen("writef.txt","w")){
        printf("Enter age:");
        scanf("%d",&age);
        fprintf(file,"%s %d\n",str,age);
        fprintf(file,"%s\n",name);
    }
    else{
        printf("File has not opened\n");
    }
    if(file!=NULL)
        fclose(file);
    return 0;
}
/*fprintf(ptr,format specifier,variable)
fprintf() is used to write in a file*/