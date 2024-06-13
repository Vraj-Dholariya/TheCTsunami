#include <stdio.h>
main()
{
    int m, n;
    printf("Enter array A's size :");
    scanf("%d", &m);
    

    int a[m], b[n];
    int marge[m + n];

    printf("\nEnter array A's elements:\n");

    for (int i = 0; i < m; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter array B's size :");
    scanf("%d", &n);
    printf("\nEnter array B's elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    // Marge Logic
    for (int i = 0; i < m; i++)
    {
        marge[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        marge[i + m] = b[i];
    }
    printf("\n\nMarge Array\n\n");
    for (int i = 0; i < m + n; i++)
    {
        printf("%d\t", marge[i]);
    }
}