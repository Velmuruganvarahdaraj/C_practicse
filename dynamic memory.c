#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("ENTER :");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("\nENTER THE VALUES: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    printf("\nTHE VALUES are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    int n1;
    printf("\nENTER n1:");
    scanf("%d",&n1);
    a =(int*)realloc(a,n1*sizeof(int));
    printf("\nENTER THE VALUES: ");
    for(i=n;i<n1;i++)
    {
        scanf("%d",(a+i));
    }
    printf("\nTHE VALUES are: ");
    for(i=0;i<n1;i++)
    {
        printf("%d ",*(a+i));
    }
    free(a);
    printf("\n%d",a);
}
