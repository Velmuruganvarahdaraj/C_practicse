#include<stdio.h>
int linear(int arr[],int element,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==element)
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int n,i,arr[10],element;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nENTER :");
    scanf("%d",&element);
    linear(arr,element,n);
}
