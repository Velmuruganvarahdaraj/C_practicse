#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("%d",a);
    printf("\n%d",p);
    printf("\n%d",*p);
    a=25;
    printf("\n%d %d",a,p);
    *p=1;
    printf("\n%d %d",a,*p);
    char *p1;
    p1=(char*)p;
    printf("%d",p1);
    printf("%d",*p1);
}
