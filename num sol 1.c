#include<stdio.h>
int main()
{
   int num,rem,rev=0;
    scanf("%d",&num);
    while(num>0)
    {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;

    }
    printf("%d",rev);
    /*int num,rem;
    scanf("%d",&num);
    while(num>0)
    {
       rem=num%10;
       printf("%d",rem);
       num=num/10;
    }*/
}

