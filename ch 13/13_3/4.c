#include <stdio.h>
main()
{
    int sum=0;
    
    int a[5][5];
    printf("Enter array's element :\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j< 5; j++)
        {
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++) 
       {  if (i==0||j==0||i==4||j==4)
         {
            printf("%d",a[i][j]);
         }
         else
         {
            printf(" ");
         }
       }
       printf("\n");
    }  
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++) 
       {  if (i==0||j==0||i==4||j==4)
         {
            sum += a[i][j];
         }
         
       }
       printf("\n");
    }
    printf("The sum of diagonal elements of an Array : %d",sum);
}