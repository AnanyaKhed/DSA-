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
void insert_at_position(int num, int pos);
int main()
{
    struct node *head=NULL;
    int n,m;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    createlist(n);
    int num,pos;
    printf("enter the data and position to insert:");
    scanf("%d %d",&num,&pos);
    insert_at_position(num, pos);
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
void insert_at_position(int num, int pos)
{
    int i=1,count=0;
    struct node * newnode, *tmp;
        tmp = head;
        while(i<pos-1 &&tmp!=NULL)
        {
            tmp = tmp->next;
            i++;
        }

            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->data= num;
            newnode->next = tmp->next;
            newnode->prev = tmp;
                tmp->next->prev = newnode;

            tmp->next = newnode;


    }

