#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<3;++i)
    {
        for(j=1;j<3;++j)
        {
             if(i==j)
            {
                continue;
            }
            printf("%d %d\n",i,j);
        }
        printf("%d %d\n",i,j);
    }
    printf("%d %d",i,j);
}
