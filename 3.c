#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ex, bs;
    float sal = 0;

    printf("Enter the experience: ");
    scanf("%d", &ex);
    if (ex >= 5 && ex <= 7)
    {
        bs = 10600;
        sal = bs + bs * 0.1;
        printf("Salary after getting the bonus : %0.2f\n", sal);
    }
    else if (ex >= 8 && ex <= 10)
    {
        bs = 21300;
        sal = bs + bs * 0.2;
        printf("Salary after getting the bonus : %0.2f\n", sal);
    }
    else if (ex > 10)
    {
        bs = 32100;
        sal = bs + bs * 0.3;
        printf("Salary after getting the bonus : %0.2f\n", sal);
    }
    else
    {
        printf("Lacks experience\n");
    }

    return 0;
}
