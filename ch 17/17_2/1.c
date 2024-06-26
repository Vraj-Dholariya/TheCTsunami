#include <stdio.h>

int sumArray(int a[], int n)
{
    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum; 
}

int main()
{
    int n;
    printf("Enter Array size : ");
    scanf("%d", &n);
    int a[n];
    
    printf("\nEnter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
    
    
    int totalSum = sumArray(a, n);
    printf("The sum of array's elements: %d\n", totalSum);

    
}
