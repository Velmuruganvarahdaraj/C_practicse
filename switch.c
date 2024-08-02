#include<stdio.h>
int main()
{
    char a;
    scanf("%d",&a);
    switch(a)
    {
    default:
        printf("INVALID");
        break;
    case 1:
        printf("ONE");
        break;
    case 2:
        printf("TWO");
        break;
    }
    return 0;
}
