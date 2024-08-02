#include<stdio.h>
int main()
{
    int num,rev=0,rem,sq,sq1,rev1,rem1;
    scanf("%d",&num);
    sq=num*num;
    printf("%d\n",sq);
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d\n",rev);
    sq1=rev*rev;
    printf("%d\n",sq1);
    while(sq1>0)
    {
        rem1=sq1%10;
        rev1=rev1*10+rem1;
        sq1=sq1/10;
    }
    printf("%d\n",rev1);
    if(sq==rev1)
    {
        printf("IT IS A ADAM NUMBER");
    }
    else
    {
        printf("IT IS NOT A ADAM NUMBER");
    }
}
