// factorial using loop

#include <stdio.h>

void main()
{
    void clrscr();
    int n, fact = 1;
    printf("Enter the limit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The result of %d factorial is : %d", n, fact);
}