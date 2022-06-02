#include <stdio.h>

int main()
{
    int Arr[20], n, temp, high, low;
    printf("Enter the Number of students n: ");
    scanf(" %d", &n);
    printf("\nEnter the Rank of %d students :\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &Arr[i]); // reading the student ranks
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }

    printf("The Ranks in ascending order is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", Arr[i]);
        printf("\n");
    }
    printf("highest Rank is : %d\n", Arr[n - 1]);
    printf("lowest Rank is :%d\n ", Arr[0]);

    return 0;
}