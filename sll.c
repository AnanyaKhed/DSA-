#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;
void createlist(int n);
void displaylist();



int main()
{
    struct node *head=NULL;
    int n;
   //printf("%d\n",sizeof(struct node));
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    createlist(n);
    printf("\nThe data in the list are\n");
        displaylist();
        count_node();

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

        temp->next = newnode;
        temp = temp->next;
    }



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
void count_node()
{
    struct node *temp;
    int i=0;
    if(head==NULL)
    {
        printf("There is no list\n");
    }

    temp=head;
    while (temp!=NULL)
    {
        i++;
        temp=temp->next;
    }
    printf("the number of nodes are: %d",i);

}
