#include<stdio.h>
int binary(int arr[],int n,int element)
{
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(element>arr[mid])
        {
            low=mid+1;
        }
        else if(element<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return arr[low];
}
int main()
{
    int n,i,element;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER :");
    scanf("%d",&element);
    int res=binary(a,n,element);
    printf("%d",res);
}
