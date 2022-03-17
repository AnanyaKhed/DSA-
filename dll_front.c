#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL;
void createlist(int n);
void displaylist();
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
    newnode->prev=temp;
    newnode->data=p;
    newnode->next=NULL;
    //head=temp;

}


int main()
{
    struct node *head=NULL;
    int n,m,p,e;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    createlist(n);
    printf("enter number to insert:");
    scanf("%d",&m);
    insert_at_beginning(m);
    printf("the list after insertion is:\n");
    displaylist();
    printf("enter number to insert:");
    scanf("%d",&p);
    insert_at_end(p);
    printf("the list after insertion is:\n");
    displaylist();
    return 0;
}

void createlist(int n)
{
    struct node *newnode,*temp;  //define two pointers
    int data,i;

    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:\n ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;
    head->prev = NULL;


    temp=head;

   for(i=2;i<=n;i++)
   {
       newnode = (struct node*)calloc(n,sizeof(struct node));

       if(newnode ==NULL)
       {
           printf("Memory not allocated\n");
           exit(0);
       }


      // printf("Enter the data of node %d: ",i);
       scanf("%d",&data);

       newnode->data = data;
        newnode->next = NULL;
        newnode->prev=NULL;

        temp->next = newnode;
        temp = temp->next;
        newnode->prev=temp;
        temp->prev=NULL;

    }
     printf("\nThe data in the list are\n");
        displaylist();



}

void displaylist ()
{
    struct node *temp;

    if(head==NULL)
    {
        printf("There is no list\n");
    }

    temp=head;
    while (temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
 }
