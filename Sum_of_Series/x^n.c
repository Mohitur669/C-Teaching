#include <stdio.h>
#include <math.h>

void main()
{
    int n , i;
    float x, sum = 0.0;
    printf("Enter the limit : \n");
    scanf("%d", &n);
    printf("Enter the number : \n");
    scanf("%f", &x);
    for (i = 0; i <= n; i++)
    {
        sum = sum + pow(x,i);
    }
    printf("The sum is : %f", sum);
}