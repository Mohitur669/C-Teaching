#include <stdio.h>

void main()
{
    float fh, cl;
    int option;
    printf("1. Farenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice : ");
    scanf("%d", &option);
    if (option == 1)
    {
        printf("Enter temperature in Fahrenheit : ");
        scanf("%f", &fh);
        cl = (fh -32)/1.8;
        printf("Your temparature in Celsius is : %f", cl);
    }
    else if (option == 2)
    {
        printf("Enter temperature in Celsius : ");
        scanf("%f", &cl);
        fh = (cl*1.8)+32;
        printf("Your temparature in Fahrenheit is : %f", fh);
    }
    else
    {
        printf("Invalid Choice !!! \n");
    }
}