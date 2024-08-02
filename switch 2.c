#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    switch(a)
    {

    case 'a' ...'z':
        printf("ONE");
        break;
    case 'A' ...'Z':
        printf("TWO");
        break;
    case '0' ...'9':
        printf("Nandha");
        break;
    default:
        printf("Invalid");



    }
    return 0;
}
