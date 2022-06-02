#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data[100][100];
    struct node *next;
};

typedef struct node *NODE;

NODE getnode()
{
    NODE newn;
    newn = (NODE)malloc(sizeof(struct node));
    if (newn == NULL)
    {
        printf("Not created\n");
        exit(0);
    }
    newn->next = NULL;
    return newn;
}

NODE read_de(int m, int n)
{
    NODE temp;
    int i, j;
    temp = getnode();
    printf("Enter number");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &temp->data[i][j]);
        }
    }
    return temp;
}

NODE insertend(NODE head, int m, int n)
{
    NODE newn = NULL, temp;
    newn = read_de(m, n);
    if (head == NULL)
    {
        head = newn;
        return head;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    return head;
}

void display(NODE head, int m, int n)
{
    NODE temp;
    int i, j;
    temp = head;
    while (temp != NULL)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", temp->data[i][j]);
            }
            printf("\n");
        }
        temp = temp->next;
    }
}
int main()
{
    NODE head = NULL;
    int c, m, n;
    while (1)
    {
        printf("ENTER YOUR CHOICE 1 :TO INSERT \n 2: DISPLAY\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("ENTER THE VALUES OF m n :\n");
            scanf("%d%d", &m, &n);

            head = insertend(head, m, n);
            break;

        case 2:
            printf("Display\n");
            display(head, m, n);
            break;

        default:
            exit(0);
        }
    }
    return 0;
}