#include<stdio.h>
#define N 5
int stack[N],ele;
int top=-1;
void push()
{

    if(top==N-1)
    {
        printf("overflow");
    }
    else
    {
        ++top;
        printf("\nENTER THE ELEMENT:");
        scanf("%d",&ele);
        stack[top]=ele;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        stack[top]=0;
        --top;
    }
}
int peak()
{

    if(top==-1)
    {
        printf("\nCANT FIND TOP");
    }
    else
        printf("%d",stack[top]);
}
int display()
{
    if(top==-1)
    {
        printf("CANT DISPLAY");
    }
    else
    {
        for(int i=0; i<=top; i++)
        {
            printf("%d ",stack[i]);
        }
    }
}
int main()
{
    int choice;
    printf("\n1.push\n2.pop\n3.peak\n4.display");
    do
    {
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:
            display();
            break;
        default:
        {
            printf("\nINVALID");o
        }
        }
    }
    while(choice!=0);
    {
        return 0;
    }
}
