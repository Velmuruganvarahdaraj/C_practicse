#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++)
    {
        for(j=1;j<=2*n+1;j++)
        {
            if(i==1||i==2*n+1||j==1||i==j||j==2*n+1||i+j==2*n+2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
          printf("\n");
    }

}
