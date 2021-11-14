//  multiplication table

#include <stdio.h>

void main()
{
    int n, multi;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        multi = n*i;
        printf("%d*%d = %d\n", n, i, multi);
    } 
}