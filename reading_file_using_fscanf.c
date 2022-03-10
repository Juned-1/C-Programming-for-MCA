#include<stdio.h>
int main()
{
    FILE * file;
    char str1[10],str2[10],str3[10];
    int age;
    if(file = fopen("writef.txt","r")){
        fscanf(file,"%s %s %s %d",str1,str2,str3,&age);
        printf("First: %s\n",str1);
        printf("Second: %s\n",str2);
        printf("Third: %s\n",str3);
        printf("Fourth: %d\n",age);
    }
    else{
        printf("File has not opened\n");
    }
    if(file!=NULL)
        fclose(file);
    return 0;
}
/*fscanf(ptr,format specifier,variable)
fscanf is used read file content, but read the file content until it encounter blank space
it stops whenever enconter a white space*/