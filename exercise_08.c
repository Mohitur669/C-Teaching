// tax counting 

#include <stdio.h>

void main()
{
    float income, tax, in_hand;
    printf("Enter your income : ");
    scanf("%f", &income);
    if (income >= 250000 && income < 500000)
    {
        printf("Your tax is 5 percent.");
        tax = (income * 5)/100;
        in_hand = income - tax;
        printf("Your tax is : %0.2f and in hand amount is : %0.2f",tax, in_hand);
    }
    else if (income >= 500000 && income < 1000000)
    {
        printf("Your tax is 10 percent.");
        tax = (income * 10)/100;
        in_hand = income - tax;
        printf("Your tax is : %0.2f and in hand amount is : %0.2f",tax, in_hand);
    }
    else if (income >= 1000000)
    {
        printf("Your tax is 15 percent.");
        tax = (income * 15)/100;
        in_hand = income - tax;
        printf("Your tax is : %0.2f and in hand amount is : %0.2f",tax, in_hand);
    }
    else {
        printf("The tax amount is zero.");
    }
}