#include <stdio.h>

void main()
{
    int n, s = 0, i;
    L1:    printf("Enter the limit : \n");
    scanf("%d", &n);    
    if (n<1)
    {
        printf("The input is wrong.\n");
        goto L1;
    }
    for (i = 1; i <= n; i++)
    {
        s = s + i*i;
    }
    printf("The sum is : %d\n", s);
}