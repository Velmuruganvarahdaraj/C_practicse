#include<stdio.h>
#include<stdbool.h>
int fima(int a[],int n,int target)
{
    int max=peak(a,n);
    int result=oabs(a,n,0,max,target);
    if(result!=-1)
    {
        return result;
    }
    return oabs(a,n,max+1,n-1,target);
}
int peak(int a[],int n)
{
    int mid,start=0,end=n-1;
    while(start<end)
    {
        mid=(start+end)/2;
        if(a[mid]>a[mid+1])
        {
            end=mid;
        }
        else
        {
            start=mid+1;
        }
    }
    return end;
}
int oabs(int a[],int n,int start,int end,int target)
{
    int mid;
    bool asc=a[start]<a[end];
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==target)
        {
            return mid;
        }
        if(asc)
        {
            if(target>a[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        else
        {
            if(target<a[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int target,res1;
    printf("ENTER :");
    scanf("%d",&target);
    int r =  fima(a,n,target);
    printf("%d",r);
}
