#include<stdio.h>
int main()
{
    char al;
    printf("Enter an alphabet:");
    scanf("%c",&al);
    if((al>='a'&&al<='z')||(al>='A'&&al<='Z'))
    {
        switch(al){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("%c is vowel\n",al);
                break;
            default:
                printf("%c is consonant\n",al);
        }
    }
    else
        printf("You have not entered alphabet\n");
    return 0;
}