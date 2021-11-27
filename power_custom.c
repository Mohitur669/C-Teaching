#include <stdio.h>

void main()
{
    int m, n, value = 1;
    printf("Enter the number : ");
    scanf("%d", &m);
    printf("Enter the power : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        value = value*m;
    }
    printf("The value of %d to the power %d is %d", m,n,value);
}