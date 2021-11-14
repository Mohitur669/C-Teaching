// sum of natural numbers

#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Enter the limit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The result is : %d", sum);
}