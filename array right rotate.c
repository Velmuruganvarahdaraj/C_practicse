#include<stdio.h>
int main()
{
    int n,i,rot,last,j;
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
        last=a[n-1];
        for(j=n-1;j>=0; j--)
        {
            a[j]=a[j-1];
        }
        a[0]=last;

    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

