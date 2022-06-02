#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *Arr;
    int n, pos = 0, neg = 0, zer = 0;
    printf("Enter no. of array elements:");
    scanf("%d", &n);
    Arr = (int *)malloc(sizeof(int) * n);
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
        if (Arr[i] > 0)
        {
            pos++;
        }
        else if (Arr[i] < 0)
        {
            neg++;
        }
        else if (Arr[i] == 0)
        {
            zer++;
        }
    }
    printf("Frequency of positive no.: %d\n", pos);
    printf("Frequency of negative no.: %d\n", neg);
    printf("Frequency of zero no.: %d\n", zer);

    return 0;
}