#include<stdio.h>
#include<string.h>

struct TREE
{
    char book_name[100];
     char author_name[100];
    int Book_id;
    struct TREE *right;
    struct TREE *left;
};
typedef struct TREE *node;
struct LINKEDLIST
{
     char book_name[100];
      char author_name[100];
    int Book_id;
   struct LINKEDLIST *next;
};
typedef struct LINKEDLIST *node1;
node insert_tree(node root);
void inorder(node root);
void insert_linkedList (node root);
 node1 head=NULL;
void main()
{
    node root=NULL;

    while(1)
    {
        printf("1.details of book returned \n2. add books to rack \n3. display book in rack\n4.exit\n");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: root=insert_tree(root);
                    break;

            case 2:delete_nodes();
                   inorder(root);
                    break;
           case 3:display();
                    break;
            case 4:exit(0);
            default:printf("please enter correct input\n\n");
        }
    }
}

node create_node()
{
    node newnode;
    newnode=(node*)malloc(sizeof(struct TREE));
    if(newnode==NULL)
    {
        printf("memory error\n\n");
        exit(0);
    }
     printf("enter book name\n");
     scanf("%s",newnode->book_name);
    //gets(newnode->book_name);
    printf("enter author name\n");
   // gets(newnode->author_name);
   scanf("%s",newnode->author_name);
    printf("enter  book id\n");
    scanf("%d",&newnode->Book_id);

    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

}

node insert_tree(node root)
{
    node newnode,curnode=root,parent;
    newnode=create_node();
    if(root==NULL)
    {
        root=newnode;
        return root;
    }
    parent = NULL;
    while(curnode!=NULL)
    {
        parent = curnode;
        if(curnode->Book_id<newnode->Book_id)
        {
            curnode=curnode->right;
        }
        else
            curnode=curnode->left;
    }
    if(newnode->Book_id<parent->Book_id)
    {
        parent->left=newnode;
    }
    else
        parent->right=newnode;
    return root;
}
void inorder(node root)
{

	if(root!=NULL)
	{
		inorder(root->left);

		//printf("%d ",root->Book_id);
		insert_linkedList(root);
		inorder(root->right);


	}


}
void display()
{     node1 t;
    if(head==NULL)
    {
        printf("list empty\n");
    }
    else
    {t=head;
    while(t!=NULL)
    {
        printf("\nbook name ::  ");
        puts(t->book_name);
         printf("\nauthor name ::  ");
        puts(t->author_name);
         printf("\nbookid ::  ");
        printf("%d\t",t->Book_id);
        t=t->next;
    }
    }
    printf("\n");

}
void insert_linkedList (node root)
{
     node1 newnode;
		newnode=malloc(sizeof(struct LINKEDLIST));
     if(newnode==NULL)
     {
         printf("memory error!!");
         exit(0);
     }

    if(head==NULL)
    {

        head=newnode;
        head->Book_id=root->Book_id;
        strcpy( head->book_name,root->book_name);
         strcpy( head->author_name,root->author_name);
        head->next=NULL;


    }

    else
    {  node1 t;
     t=head;
        while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=newnode;
    newnode->Book_id=root->Book_id;
     strcpy( newnode->book_name,root->book_name);
         strcpy( newnode->author_name,root->author_name);
    newnode->next=NULL;

    }

}
void delete_nodes()
{
         node1 current = head,prev;

   while (current != NULL)
   {
       prev = current->next;
       free(current);
       current = prev;
   }
   head = NULL;
    printf("\n");

}
