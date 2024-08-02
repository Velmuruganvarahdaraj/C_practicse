#include<stdio.h>
int main()
{
    int n,i,rot,first,j;
    printf("ENTER THE SIZE:");
    scanf("%d",&n);
    int a[n];
    printf("\nENTER THE ELEMENTS :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nENTER NO OF ROTATION:");
    scanf("%d",&rot);
    for(i=1; i<=rot; i++)
    {
        first=a[0];
        for(j=0;j<n-1; j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=first;]

    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

