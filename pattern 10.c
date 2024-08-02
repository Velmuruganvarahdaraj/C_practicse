#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=2*n-1; ++j)
        {
            if(i>=j)
            {
                printf("%d",j);
            }
            else if(i+j>=2*n)
            {
                printf("%d",2*n-j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=n-1; i>=1; --i)
    {
        for(j=1;j<=2*n-1; ++j)
        {
            if(i>=j)
            {
                printf("%d",j);
            }
            else if(i+j>=2*n)
            {
                printf("%d",2*n-j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
