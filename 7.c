#include <stdio.h>
void read_array(int a[], int n);
void display_array(int a[], int n);
void income(int a[], int n);
int main()
{
    int a[20], n;
    printf("Enter number of tax payers\n");
    scanf("%d", &n);
    read_array(a, n);
    printf("Elements are\n");
    display_array(a, n);
    income(a, n);

    return 0;
}

void read_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }
}

void display_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d\t", a[i]);
    }
}

void income(int a[], int n)
{
    int count1 = 0, count2 = 0, sum = 0, avg = 0, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 250000)
            count1++;

        if (a[i] > 50000 && a[i] < 150000)
        {
            count2++;
        }

        sum = sum + a[i];
    }
    avg = sum / n;

    printf("\nNumber of taxpayers who paid above 2.5 lakhs=%d ", count1);
    printf("\nNumber of taxpayers who paid btwn 150000 to 50000=%d ", count2);
    printf("\naverage tax= %d", avg);
}
