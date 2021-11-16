#include <stdio.h>
int fact (int n);  // prototype

void main()
{
    int x, result;
    printf("Enter the number : ");
    scanf("%d", &x);
    result = fact(x);
    printf("The factorial is : %d", result);
}

int fact (int n)
{
    int f;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        f = n * fact (n-1);
    }
}