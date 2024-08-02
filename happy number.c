#include <stdio.h>
int Hap(int num)
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
    int num ;
    scanf("%d",&num);
    int temp = num;

    while(temp!=1 && temp!=4)
    {
        temp = Hap(temp);
    }
    if(temp == 1)
        printf("%d is a happy number", num);
    else
        printf("%d is not a happy number", num);

    return 0;
}
