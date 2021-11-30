#include <stdio.h>

void main()
{
    int marks[5];
    printf("Enter the marks of 1st student : ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of 2nd student : ");
    scanf("%d", &marks[1]);
    printf("The marks of 1st student : %d\n", marks[0]);
    printf("The marks of 2nd student : %d", marks[1]);
}