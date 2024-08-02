#include<stdio.h>
int peakIndexInMountainArray(int arr[], int arrSize)
{
    int low=0,high=arrSize-1;
    int mid=(low+high)/2;
    while(low<high)
    {
        if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]<arr[mid+1])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}
int main()
{
    int n,i,arr[10];
    scanf("%d",&n);
    printf("enter:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    int res=peakIndexInMountainArray(arr,n);
    printf("\nprint:%d",res);
}
