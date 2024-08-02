#include<stdio.h>
int min(int i,int j)
{
    if(i<j)
        return i;
    else
        return j;
}
int main()
{
    int n,i,j,N,res;
    scanf("%d",&n);
    N=2*n;
    for(i=0;i<=N;i++)
    {
        for(j=0;j<=N;j++)
        {
            res=min(min(j,N-j),min(i,N-i));
            printf("%d",res);
        }
        printf("\n");
    }
}
