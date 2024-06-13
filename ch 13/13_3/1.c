#include <stdio.h>
    main()
    {
        int row,col,sum=0;
        printf("Enter value of rows :");
        scanf("%d", &row);
        printf("Enter value of cols :");
        scanf("%d", &col);

        int a[row][col];

        printf("\n Array Input \n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("Enter a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }
            
        }

        printf("\n Array output\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", a[i][j]);
            }
           
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                sum += a[i][j];
            }
        }
        float avg = sum / (row + col);
       
        printf("\nArray AVG : %.2f",avg);
    }

