/**
 * *********************************************************************
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * *********************************************************************
 *
 * int get(MountainArray *, int index);
 * int length(MountainArray *);
 */

int findInMountainArray(int target, MountainArray* mountainArr)
{
	int mid,low=0,high=(sizeof(mountainArr)/sizeof(mountainArr[0]))-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(mountainArr[mid]>mountainArr[mid+1])
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
        return get(mountainArr,low);
    }
}
int get(MountainArray *, int index)
{
    int low=0,high=(sizeof(mountainArr)/sizeof(mountainArr[0]))-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(index>arr[mid])
        {
            low=mid+1;
        }
        else if(index<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ele>arr[mid])
        {
            high=mid-1;
        }
        else if(ele<arr[mid])
        {
            low=mid+1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
