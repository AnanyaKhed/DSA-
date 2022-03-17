#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insert_at_beginning (int m)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->next=head;
    head=temp;
}
void insert_at_end(int p)
{
    struct node *temp,*newnode;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    temp->next=newnode;
    newnode->data=p;
    newnode->next=NULL;
    //head=temp;

}

void insert_at_position(int x,int n)
{
    int c=2;
    struct node *temp,*newnode,*temp2;;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    int y;
    printf("the location:");
    scanf("%d",&y);
    while(y>=c)
    {
        c++;
        temp2=temp;
        temp=temp->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=x;
    newnode->next=temp;
    temp2->next=newnode;

}
void create_list (int n)
{
    struct node *newnode,*temp;
        head=(struct node*)malloc(sizeof(struct node));
    int data;
    printf("enter data:\n");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(int i=1;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("memory not allocated:");
            exit(0);
        }
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int n;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    create_list(n);
    printf("the created list:\n");
    display();
    int m,p;
    printf("enter the number to insert at beginning:");
    scanf("%d",&m);
    insert_at_beginning(m);
    printf("the list after insertion at beginning:\n");
    display();
     printf("enter the number to insert at end:");
    scanf("%d",&p);
    insert_at_end(p);
    printf("the list after insertion at end is:\n");
    display();
     int x;
    printf("enter the data to insert:");
    scanf("%d",&x);
    insert_at_position(x,n);
    printf("the list after insertion at position is:\n");
    display();
}
