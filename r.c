#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
            c=0;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
            {
                a[i]=0;
                c++;
                break;

            }

        }
        if(c==0)
        {
            printf("%d ",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {

        printf("\n%d ",a[i]);
    }
}
