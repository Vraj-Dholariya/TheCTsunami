#include <stdio.h>
    main()
    {
        int row,col;
        printf("Enter value of rows :");
        scanf("%d", &row);
        printf("Enter value of cols :");
        scanf("%d", &col);

        int a[row][col],b[row][col],sum[row][col];

        printf("\nFirst Array  \n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("Enter a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }
            
        }

       
        printf("\nSecond Array  \n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("Enter b[%d][%d] = ", i, j);
                scanf("%d", &b[i][j]);
            }
            
        }
        printf("\nSum of Arrays :\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        
    }
