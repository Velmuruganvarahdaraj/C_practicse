#include<stdio.h>
int main()
{
    int i,j;
    i = 0;
    while(1)
    {
        if(i==10)
        {
            j=1;
            if(i>j)
            {
                printf("%d %d\n",i,j);
            }
            printf("%d %d\n",i,j);
            ++j;
        }
        ++i;
    }
    printf("%d %d\n",i,j);
}
