#include<stdio.h>
int Hap(int num)
{
       while(num!=1 && num!=4)
    {
        num = sq(num);
    }
}
int sq(num)
{
        int rem = 0, sum = 0;
    if(num==0)
    {
        return 4;
    }
    while(num > 0)
    {
        rem = num%10;
        sum = sum + (rem*rem);
        num = num/10;
    }
    return sum;
}
int main()
{
    int start,end,i,happy;
    printf("Enter start an end range:");
    scanf("%d %d",&start,&end);
    for(i=start;i<end;++i)
    {
        if(Hap(i))
        {
            printf("%d\t",i);
        }
    }
}

