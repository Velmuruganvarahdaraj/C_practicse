#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start,*end,*newnode;
int ele,choice=1;
struct node *start=0,*end=0;
void create()
{

        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nENTER THE ELEMENT :");
        scanf("%d",&ele);
        newnode->data=ele;
        newnode->next=0;
        if(start==0)
        {
            start=end=newnode;
        }
        else
        {
            end->next=newnode;
            end=newnode;
        }
        end->next=start;
}
void display()
{
    struct node *temp=start;
    while(temp->next!=start)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);

}

int main()
{
    int choice;
    do
    {
        printf("ENTER YOUR CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        default:
        {
            printf("INVALID");
        }
        }
    }
    while(choice!=0);
    return 0;
}
