// Addition of Matrix

#include <stdio.h>

void main()
{
    int a[100][100], b[100][100], sum[100][100], r, c, i, j;
    printf("Enter the number of rows (between 1 to 100) :");
    scanf("%d", &r);
    printf("Enter the number of column (between 1 to 100) :");
    scanf("%d", &c);

    printf("Enter the elements of 1st Matrix : \n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the elements a%d%d : ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 2nd Matrix : \n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the elements b%d%d : ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    
    // Adding two matrices
    printf("Sum of two Matrices : \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // printing the result
    printf("Sum of two matrices : \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d   ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            } 
        }
    }
}