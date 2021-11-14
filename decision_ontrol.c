#include <stdio.h>

void main()
{
    float price;
    printf("Enter the value : ");
    scanf("%f", &price);
    if (price > 500 || price == 500)
    {
        printf("Your discount is 10 percent");
    }
    else
    {
        printf("Your discount is 5 percent");
    }
}