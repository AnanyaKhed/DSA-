#include <stdio.h>

int main()
{
    int n, flag =1;
    printf("Enter a positive integer number :");
    scanf("%d", &n);
    if (n == 0 || n == 1) // 0 and 1 are not prime numbers
        flag = 0;         // flag is 0 for non-prime number
    for (int i = 2; i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is not prime number .", n);
    }
    else
    {
        printf("%d is a prime number .", n);
    }

    return 0;
}