#include <stdio.h>
#include <stdlib.h>

int key_search(int Arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int *Arr;
    int n, key, pos;
    printf("Enter no. of array elements:");
    scanf("%d", &n);
    Arr = (int *)malloc(sizeof(int) * n);
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }
    printf("Enter the key to be searched:");
    scanf(" %d", &key);
    pos = key_search(Arr, n, key);
    if (pos == -1)
    {
        printf("Key not found");
    }
    else
    {
        printf("Key found at %d index", pos);
    }

    return 0;
}