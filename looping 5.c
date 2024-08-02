#include<stdio.h>
int main()
{
    int i;
    while(1)
    {
        if(i==10)
        {
            printf("%d",i);
            break;
        }
        ++i;
    }
    printf("%d",i);
}
