#include<stdio.h>
#define N 5
int stack[N],top=-1,i,ele;
void push()
{
    if(top==N-1)
    {
        printf("overflow");
    }
    else
    {
        ++top;
        printf("\nENTER THE ELEMENT :");
        scanf("%d",&ele);

    }
}
