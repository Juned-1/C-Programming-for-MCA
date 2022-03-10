#include<stdio.h>
int main()
{
    int user_id,user_pass;
    printf("Enter user id:");
    scanf("%d",&user_id);
    switch(user_id)
    {
        case 1994:
            printf("Enter password:");
            scanf("%d",&user_pass);
            switch(user_pass){
                case 120:
                    printf("Welcome sir\n");
                    break;
                default:
                    printf("Invalid paswword\n");
            }
            break;
        case 2004:
            printf("Enter password:");
            scanf("%d",&user_pass);
            switch(user_pass){
                case 240:
                    printf("Welcome Mam\n");
                    break;
                default:
                    printf("Invalid password\n");
            }
            break;
        default:
            printf("Invalid user name\n");
    }
    return 0;
}