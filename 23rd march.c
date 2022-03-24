
#include<stdio.h>
#include<stdlib.h>
typedef struct mynode
{
    int i;

    struct mynode *next,*bottom;
}NODE;
NODE getdata(NODE *p)
{
    scanf("%d",&p->i);
}



void merge (NODE* head)
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
    getdata(nw);
    nw->bottom=first;
    first=nw;
    return(first);

}
void display( NODE* n)
{
    while (n) {
        printf("%d ", n->i);
        n = n->bottom;
    }
}
NODE *sort(NODE *l)
{
     NODE *t;
     NODE *s;
     int x;
     t=l;
     while(t!=NULL)
     {
          s=t->bottom;
          while(s!=NULL)
          {
               if(t->i>s->i)
               {
                    x=t->i;
                    t->i=s->i;
                    s->i=x;
               }
               s=s->bottom;
          }
          t=t->bottom;
      }
      t=l;
     return t;
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

    int j,k;
    printf("Enter number of elements for 2nd list:");
    scanf("%d",&k);
     for(j=0;j<k;j++)
    {
        head->next=insertfront(head->next);
    }

    int l,m;
    printf("Enter number of elements for 3rd list:");
    scanf("%d",&l);
     for(m=0;m<l;m++)
    {
        head->next->next=insertfront(head->next->next);
    }

    int a,b;
    printf("Enter number of elements for 4th list:");
    scanf("%d",&a);
     for(b=0;b<a;b++)
    {
        head->next->next->next=insertfront(head->next->next->next);
    }
    merge(head);
    display(head);
    printf("\n");
   head=sort(head);
        display(head);
}

