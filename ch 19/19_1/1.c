#include <stdio.h>
int arraySqure(int size);
int main()
{
    int n;

    printf("Enter array's size: ");
    scanf("%d", &n);

    int a[n], *ptr[n];
    printf("\nEnter array elements:\n\n");
    for (int i = 0; i < n; i++)
    {

        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {

        a[i] = arraySqure(a[i]);
        ptr[i] = &a[i];
    }
    printf("\n\nSqure of each element:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", *ptr[i]);
    }
}
int arraySqure(int size)
{
    int squre;
    squre = size * size;
    return squre;
}