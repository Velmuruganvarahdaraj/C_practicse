#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0,temp,rem,result=0;
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        num=num/10;
        ++count;
    }
    num=temp;
    while(num>0)
    {
        rem=num%10;
        result=result+pow(rem,count);
        num=num/10;
    }
    if(result==temp)
    {
        printf("IT IS A ARMSTRONG NUMBER");
    }
    else
    {
        printf("IT IS NOT A ARMSTRONG NUMBER");
    }

}
