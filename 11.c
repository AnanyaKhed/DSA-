#include <stdio.h>

int main()
{
    int unit;
    float amt;
    while (1)
    {
        printf("\nEnter total units consumed :");
        scanf(" %d", &unit);
        if (unit > 0 && unit <= 100)
        {
            amt = unit * 1.5;
        }
        else if (unit > 100 && unit <= 250)
        {
            amt = 100 * 1.5 + (unit - 100) * 2.3;
        }
        else if (unit > 250 && unit <= 600)
        {
            amt = 100 * 1.5 + 250 * 2.3 + (unit - 250) * 4.0;
        }
        else if (unit > 600)
        {
            amt = 100 * 1.5 + 250 * 2.3 + 600 * 4.0 + (unit - 600);
        }
        printf("Total Electricity bill is : %0.2f ", amt);
    }

    return 0;
}