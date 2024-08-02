#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start,*end,*newnode,*temp;
int ele,choice;
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

}
void display()
{
    temp=start;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insert()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nENTER THE ELEMENT :");
    scanf("%d",&ele);
    temp=start;
    if(temp!=0)
    {
        start=newnode;
        start->next=temp;
    }
}

int main()
{
    int choice;
    do
    {
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
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
