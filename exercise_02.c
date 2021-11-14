#include <stdio.h>

void main()
{
    float a,b,c,average;
    printf("Enter the 1st subject marks : ");
    scanf("%f", &a);
    printf("Enter the 2nd subject marks : ");
    scanf("%f", &b);
    printf("Enter the 3rd subject marks : ");
    scanf("%f", &c);
    average = (a+b+c)/3;
    if (a>=40 && b>=40 && c>=40 && average>=33)
    {
        printf("You have passed the exam, Congratulations");
    }
    else{
        printf("You failed the exam !!");
    }
}