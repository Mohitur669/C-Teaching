#include <stdio.h>
int sum (int a , int b);  // function prototype

void main()
{
    int d, num1, num2;
    printf("Enter the 1st value : ");
    scanf("%d", &num1);
    printf("Enter the 2nd value : ");
    scanf("%d", &num2);
    d = sum (num1, num2);   // Function call
    printf("The sum is : %d", d);
}

int sum (int a, int b) // function definition
{
    int c;
    c = a+b;
    return c;
}