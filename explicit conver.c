#include<stdio.h>
int main()
{
    int a=1025;
    int *p=&a;
    char *p1;
    p1=(char*)p;
    printf("\n%d",p1);
    printf("\n%d",*p1);
    //printf("\n%d",p1+1);
    printf("\n%d",*(p1+1));
    void *p2;
    p2= p;
    printf("\n%d",p2);
    //printf("\n%d",*p2);
}
