#include <stdio.h>
int main()
{
    float sum = 0, avg = 0;
    int a[10], n, i, large, small;
    printf("Enter the number of students who returned the book late\n");
    scanf("%d", &n);
    printf("Enter the number of days after the deadline\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        avg = sum * 2 / n;
    }
    printf("Average penalty paid by a student = %0.2f\n", avg);
    large = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
    }
    printf("Maximum penalty paid by a student is %d\n", large * 2);
    small = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    printf("Minimum penalty paid by a student is %d\n", small * 2);
    printf("Total penalty collected is %0.2f\n", sum * 2);
}