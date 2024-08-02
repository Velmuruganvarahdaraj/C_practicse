#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*newnode,*temp;
struct node *front=0,*rear=0;
int x;
void enqueue()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nENTER THE ELEMENT:");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=0;
    if(front==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    temp=front;
    if(rear==0||front==0)
    {
        printf("underflow");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}
void display()
{
    temp=front;
    if(rear==0||front==0)
    {
        printf("CANT DISPLAY");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void peak()
{
    if(rear==0||front==0)
    {
        printf("CANT FIND PEAK");
    }
    else
    {
        printf("%d",front->data);
    }
}
int main()
{
    int choice;
    printf("1.enqueue\n2.dequeue\n3.display\n4.peak");
    do
    {
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peak();
            break;
        default:
            {
                printf("\nINVALID");
            }
        }
    }
    while(choice!=0);

        return 0;

}
