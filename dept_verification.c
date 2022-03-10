#include<stdio.h>
int main()
{
    int id;
    printf("Enter id:");
    scanf("%d",&id);
    switch(id)
    {
        case 1:
        case 2:
        case 3:
            printf("Computer science Department\n");
            break;
        case 11:
        case 12:
        case 13:
            printf("Linguistic Department\n");
            break;
        case 16:
        case 17:
        case 18:
            printf("Mathematics Department\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}