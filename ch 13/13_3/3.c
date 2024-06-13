#include <stdio.h>
main()
{
    int n,sum=0;
    printf("Enter the array's size of rows & columns :");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter array's element :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++) 
       {  if (i==j)
         {
            sum += a[i][j];
         }
         
       }
       printf("\n");
    }
    printf("The sum of diagonal elements of an Array : %d",sum);
}