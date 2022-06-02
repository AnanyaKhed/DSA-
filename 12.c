#include <stdio.h>
#include <stdlib.h>
void read(int A[], int n);
void display(int A[], int n);
void max(int A[], int);
int main()
{
    int A[30], n;
    printf("\nEnter size of an array:");
    scanf("%d", &n);
    if (n <= 0 || n > 30)
    {
        printf("Invalid Array Size");
        exit(0);
    }
    read(A, n);
    display(A, n);
    max(A, n);
}

void read(int A[30], int n)
{
    int i;
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
}
void display(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t", A[i]);
    }
}
void max(int A[], int n)
{
    int rem, max;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        max = 0;
        int m = A[i];
        for (int j = 0; m!= 0; j++)
        {

            rem = m % 10;
            if (rem > max)
            {
                max = rem;
            }
            m = m / 10;
            
        }
        printf("\n Max digit os A[%d] is %d\n",i,max);
        sum = sum + max;
    }
    printf("\n sum=%d", sum);
}