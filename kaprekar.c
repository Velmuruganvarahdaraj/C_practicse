#include<stdio.h>
#include<math.h>
int main()
{
    int num,sq,count=0,i,div,res,flag=0;
    scanf("%d",&num);
    sq=num*num;
    int temp=sq;
    while(sq>0)
    {
        sq=sq/10;
        ++count;
    }
    sq=temp;
    if(sq==num)
    {
        printf("IT IS 0 1A KAPREKAR NUMBER");

    }
    else
    {
        for(i=1; i<=count-1; ++i)
        {
            div=pow(10,i);
            if(div==num)
            {
                break;
            }
            res=sq/div+sq%div;
            if(res==num)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("IT IS A KAPREKAR NUMBER");
        }
        else
        {
            printf("IT IS NOT A KAPREKAR NUNMBER");
        }
    }

}
