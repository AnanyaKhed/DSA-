#include<stdio.h>
#include<stdlib.h>
typedef struct mynode
{
    int i;

    struct mynode *next,*bottom;
}NODE;
NODE readinfo(NODE *p)
{
    printf("Enter \n");
    scanf("%d",&p->i);
}
NODE *t(NODE *x,NODE *y)
{
    NODE *r;
    //check for null characters in both the lists
    if (x==NULL)
        return y;
    if (y=NULL)
        return x;
    //check for minimum number
    if(x->i<y->i)
    {
        r=x;
        r->bottom=t(x->bottom,y);
    }
    if(x->i>y->i)
    {
        r=y;
        r->bottom=t(x,y->bottom);
    }
    r->next=NULL;
    return r;

}
void display( NODE* n)
{
    while (n) {
        printf("%d ", n->i);
        n = n->bottom;
    }
}
void align (NODE* head)
{
    NODE* curr = head;

    while (curr != NULL)
    {
        NODE* temp = curr;
        while (temp->bottom != NULL) {
            temp = temp->bottom;
        }
        temp->bottom = curr->next;
        curr = curr->next;
    }
}
NODE *insertfront(NODE* first)
{
    NODE * nw;
    nw=(NODE *)malloc(sizeof(NODE));
    readinfo(nw);
    nw->bottom=first;
    first=nw;
    return(first);

}

int main()
{
    NODE *head=NULL;
    int i,n;
    printf("Enter number of elements for 1st list:");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        head=insertfront(head);
    }
   // printf("data entered for first list!\n");


    int j,k;
    printf("Enter number of elements for 2nd list:");
    scanf("%d",&k);
     for(j=0;j<k;j++)
    {
        head->next=insertfront(head->next);
    }
    //printf("data entered for second list!\n");


    int l,m;
    printf("Enter number of elements for 3rd list:");
    scanf("%d",&l);
     for(m=0;m<l;m++)
    {
        head->next->next=insertfront(head->next->next);
    }
   // printf("data entered for third list!\n");

    int a,b;
    printf("Enter number of elements for 4th list:");
    scanf("%d",&a);
     for(b=0;b<a;b++)
    {
        head->next->next->next=insertfront(head->next->next->next);
    }
    printf("data entered:\n");
    align(head);
    display(head);


}
