#include <stdio.h>

int main()
{
    int n, even=0, odd=0, max=0;
    int marks, A[20];
    printf("Enter the number of students :\n");
    scanf(" %d", &n);
    printf("Enter the marks of %d studens :\n", n);
    for (int i = 1; i <=n; i++)
    {
        scanf(" %d", &A[i]);
    }
    for (int i = 1; i <=n; i++)
    {
        if ((A[i] % 2) == 0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }
    printf("\nEVEN marks : %d ", even);
    printf("\nODD marks : %d", odd);
    for (int i = 1; i <=n; i++)
    {
        if (A[i] == 10)
        {
            printf("\nstudent %d has scored out of marks\n",i);
            max++;
        }
    }

    printf("\n%d students scored out of marks", max);

    return 0;
}