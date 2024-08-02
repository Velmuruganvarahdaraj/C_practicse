#include<stdio.h>
struct rect
{
    int length;
    int breath;
};
void change(struct rect *r1)
{
    r->length=20;//"->"should be used for pointer variable
    r->breath=25;
}
int main()
{
    struct rect r={10,15};
    change(&r);
    printf("%d %d",r.length,r.breath);//r1 cannot be accessed here
}
