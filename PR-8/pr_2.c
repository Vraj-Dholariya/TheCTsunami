#include <stdio.h>
int arrayCube(int size);
void main()
{
    int n;

    printf("Enter array's size: ");
    scanf("%d", &n);

    int a[n][n], *ptr[n][n];
    printf("\nEnter array elements:\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
           
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = arrayCube(a[i][j]);
            ptr[i][j] = &a[i][j];
        }
        
    }
    printf("\n\nCubes of all elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            printf("%d ", *ptr[i][j]);
        }
        printf("\n");
    }
}
int arrayCube(int size)
{
    int cube;
    cube = size * size * size;
    return cube;
}
