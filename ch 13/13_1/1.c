#include <stdio.h>
main()
{

    int n;
    printf("Enter Array size :");
    scanf("%d", &n);
    int a[n];
    printf("\n Enter Array elements : \n");
    for (int i = 0; i < n; i++)
    {

        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
    }
    printf("\n");

    printf("Length of an Array is : %d", n);
}
