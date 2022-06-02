#include <stdio.h>
void palindrome(int*n);
int main()
{
    int *n;
    printf("Enter a Number which is above 3 digit: ");
    scanf("%d", &n);
    palindrome(n);

    return 0;
}
void palindrome(int *n)
{
    int sum=0,temp=*n;
    while (n != 0)
    {
        sum = sum * 10 + *n % 10;
        *n = *n / 10;
    }
    if (temp==sum)
    {
        printf("%d is palindrome number ",temp);
    }
    else
    {
        printf("%d is not palindrome",temp);
    }
    
}