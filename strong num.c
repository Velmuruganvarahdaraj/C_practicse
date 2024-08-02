#include<stdio.h>
int main()
{
    int n,i,rem,sum=0;
    scanf("%d",&n);
    int temp=n;
    if(n==0)
    {
        printf("IT IS NOT STRONG NUMBER");
    }
    else
    {
        while(n>0)
        {
            rem=n%10;
            int fact =1;
            for(i=rem; i>=2; --i)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            n=n/10;
        }
        if(temp==sum)
        {
            printf("IT IS A STRONG NUMBER");
        }
        else
        {
            printf("IT IS NOT A STRONG NUMBER");
        }
    }

}
