#include<stdio.h>
int swap(int a[],int f,int s)
{
    int temp=a[f];
    a[f]=a[s];
    a[s]=temp;
}
int cyclic_sort(int a[],int n)
{
    int i=0,correct;
    while(i<n)
    {
        correct=a[i]-1;
        if(a[i]!=a[correct])
        {
            swap(a,i,correct);
        }
        else
        {
            ++i;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    cyclic_sort(a,n);
}
