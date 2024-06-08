#include <stdio.h>
main()
{

    int n;
    printf("Enter Array size :");
    scanf("%d", &n);
    int a[n], b[n], sum[n];
    printf("\n\nFirst Array\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]  :", i);
        scanf("%d", &a[i]);
    }
    printf("\n\nSecond Array\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter b[%d]  :", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum[i] = a[i] + b[i];
    }
    printf("Array c is :\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", sum[i]);
    }
}
