#include<stdio.h>
void fun(int x)
{
    if(x==0)
        return 1;
    else
        printf("%d",x);//calling phase
        fun(x-1);
        printf("%d",x);

}
int main()
{
    int x=3;
    fun(x);
}
