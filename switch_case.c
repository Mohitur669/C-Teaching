// switch case eaxmple

#include <stdio.h>

void main()
{
    int choice, a, b, sum, sub;
    printf("1. Addition \n2. Substraction\n");
    printf("Enter your choice :");
    scanf("%d", &choice);
    printf("Enter the 1st number\n");
    scanf("%d", &a);
    printf("Enter the 2nd number\n");
    scanf("%d", &b);
    sum = a+b;
    sub = a-b;
    switch (choice)
    {
    case 1:
        printf("Sum is : %d\n", sum);
        break;

    case 2:
        printf("Substraction is : %d\n", sub);
        break;
    }
}