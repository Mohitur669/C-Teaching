// leap year or not counting

#include <stdio.h>

void main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (year%400 == 0)
    {
        printf("This is a leap year.");
    }
    else if (year%100 == 00 && year%400!=0)
    {
        printf("This is not a century leap year.");
    }
    else if (year%4 == 0)
    {
        printf("This is a normal leap year");
    }
    
    else{
        printf("This is not a leap year.");
    }   
}