#include <stdio.h>
void perfect(int n);
int main()
{
    int n, sum = 0;
    printf("Enter a positive integer no. :");
    scanf("%d", &n);
    perfect(n);
}
    
void perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        int rem = n % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("\n%d is perfect number", n);
    }
    else
    {
        printf("\n%d  is not perfect number ", n);
    }
    
}