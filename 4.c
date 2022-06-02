#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *Arr;
    int n, sum = 0, above = 0, below = 0;
    float avg;
    printf("Enter no. of students:");
    scanf("%d", &n);
    Arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of student %d:", i + 1);
        scanf("%d", &Arr[i]);
        sum = sum + Arr[i];
    }
    avg = sum / n;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] >= avg)
        {
            above++;
        }
        else
        {
            below++;
        }
    }
    printf("The class average is:%0.2f\n", avg);
    printf("No. of students whose marks is above average:%d\n", above);
    printf("No. of students whose marks is below average:%d\n", below);
    return 0;
}