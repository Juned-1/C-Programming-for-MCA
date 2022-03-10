#include<stdio.h>
int main()
{
    int id;
    printf("Enter department id:");
    scanf("%d",&id);
    switch(id)
    {
        case 1:
            printf("Finance department\tContact:677\tEmail:uuh@email.com\n");
            break;
        case 2:
            printf("Legal affairs department\tcontact: 53673\tEmail:ui@email.com\n");
            break;
        case 3:
            printf("Tourism department\t5678\tEmail:fft@email.com\n");
            break;
        case 4:
            printf("Public relation department\tcontact:45638\tyrs@email.com\n");
            break;
        case 5:
            printf("Power department\tcontact:54637\tte@email.com\n");
            break;
        default:
            printf("You have entered invalid id! try again...");
    }
    return 0;
}