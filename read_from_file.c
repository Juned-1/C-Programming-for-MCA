#include<stdio.h>
int main()
{
    FILE * file;
    if(file = fopen("text.txt","r")){
        printf("File opened succesfully in read mode\n");
    }
    else{
        printf("File has not opened\n");
    }
    /*if file name does not match, then may not open in this case pointer file will be NULL*/
    if(file!=NULL)
        fclose(file);
    return 0;
}