#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter the Number : ");
    scanf("%d", &a);
    b = a%97;
    if (b != 0)
    {
        printf("The number is divisible\n");
    }
    else {
        printf("The number is not divisible");
    }
}