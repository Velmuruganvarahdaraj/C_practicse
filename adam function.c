#include<stdio.h>
int square(int a)
{
    return a*a;
}
int reverse(int res)
{
    int rem=0,rev1=0;
    while(res>0)
    {
        rem=res%10;
        rev1=rev1*10+rem;
        res=res/10;
    }
    return rev1;
}
int main()
{
    int num,s1,rev,s2,rev1;
    scanf("%d",&num);
    s1=square(num);
    rev=reverse(num);
    s2=square(rev);
    rev1=reverse(s2);
    if(rev1==s1)
    {
        printf("IT IS A ADAM NUMBER");
    }
    else
    {
       printf("IT IS NOT A ADAM NUMBER");
    }
    return 0;

}
