#include <stdio.h>
#include <math.h>

void main()
{
    int i, sum = 0, n;
    L1 : printf("Enter the value of n : \n");
    scanf("%d", &n);
    if (n<1)
    {
        printf("The input is wrong.\n");
        goto L1;
    }
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i,i);
    }
    printf("The sum is : %d\n", sum);
}