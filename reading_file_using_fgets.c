#include<stdio.h>
int main()
{
    FILE * file;
    char str1[30];
    if(file = fopen("writef.txt","r")){
        fgets(str1,30,file);
        printf("String retrieved from file:\n");
        puts(str1);
    }
    else{
        printf("File has not opened\n");
    }
    if(file!=NULL)
        fclose(file);
    return 0;
}
/*fgets(buffer,maxcount,filepointer)
is used to read content of the file
fgets stops at maxcount/newline character/end of file whichever comes first*/