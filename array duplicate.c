#include<stdio.h>
int main()
{
    int n,i,j,c;
    printf("ENTER THE SIZE:");
    scanf("%d",&n);
    int a[n];
    printf("\nENTER THE ELEMENTS :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                ++c;
                break;
            }
        }
        if(c==0)
        {
            printf("%d \n",a[i]);
        }
        else
        {
            a[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        printf("%d ",a[i]);
    }

}
