#include <stdio.h>
void read_array(int a[], int n);
void display_array(int a[], int n);
void expenditure(int a[],int n);
int main()
{
    int a[20], n;
    printf("Enter the total number of months :\n");
    scanf(" %d", &n);
    printf("Enter the expenditure :");
    read_array(a, n);
    printf("\n");
    display_array(a, n);
    expenditure(a, n);

    return 0;
}
void read_array(int a[], int n)
{
    for (int i = 1; i <=n; i++)
    {
        scanf(" %d", &a[i]);
    }
}
void display_array(int a[], int n)
{
    for (int i = 1; i <=n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void expenditure(int a[],int n)
{
    int max=0,min=0,index=0,sum=0;
    for (int  i = 1; i <=n; i++)
    {
        if(a[i]>max)
        {
            max=i;
        }

        if (a[i]<min)
        {
            min=i;
        }
        if (a[i]>=35000)
        {
            index=i;
            printf("in month %d they spent more than 35000",i);
        }

        sum=sum+a[i];
        
    }

    printf("\nIn month %d they spent more",max);
    printf("\nIn month %d they spent less",min);
    
        printf("\nAverage=%d",sum/n);





    
}
