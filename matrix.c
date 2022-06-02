#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    int rows;
    int cols;
    int array[5][5];
    struct Node* next;
}typedef node;

node* head;

node* CreateMatrix(node *temp)
{
    int rows=temp->rows;
    int cols=temp->cols;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            temp->array[i][j]=i+j;
        }
    }
    return temp;
}

void InsertEnd()
{
    int rows,cols;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&rows,&cols);
    node* temp=malloc(sizeof(struct Node));
    node* temp1;
    temp->rows=rows;
    temp->cols=cols;
    temp=CreateMatrix(temp);


    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->next=NULL;
    }
}


void DisplayEnd(){
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
        for(int i=0;i<temp->rows;i++)
    {
        for(int j=0;j<temp->cols;j++)
        {
            printf("%d ",temp->array[i][j]);
        }
    printf("\n");

    }
    printf("\n");
}
int main()
{
    head=NULL;

    int t;
    printf("enter the no of matrix you want to insert\n");
    scanf("%d",&t);
    while(t--){
        InsertEnd();
        DisplayEnd();
    }
}
