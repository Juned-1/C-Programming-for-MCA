/*1. Create a structure Book with members id, title, author, price. Define a function with the structure
as argument to print details of two books.*/
#include<stdio.h>
struct book{
    int member_id;
    char title[20],author[20];
    float price;
};
void print_details(struct book,struct book);
int main()
{
    struct book b1 = {.member_id = 1,.title = "Let US C",.author="Yashwant P. Kanetkar",.price=490};
    struct book b2 = {.member_id = 2,.title = "The C Programming",.author="Dennis M. Ritche",.price=635};
    printf("Details of books are:\n");
    print_details(b1,b2);
    return 0;
}
void print_details(struct book b1,struct book b2)
{
    printf("Memebr id = %d, title = %s, author = %s, price = %.2f\n",b1.member_id,b1.title,b1.author,b1.price);
    printf("Memebr id = %d, title = %s, author = %s, price = %.2f\n",b2.member_id,b2.title,b2.author,b2.price);
}
