#include<stdio.h>
int binary(int arr[],int n,int ele)
{
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ele>arr[mid])
        {
            low=mid+1;
        }
        else if(ele<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
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
