#include <stdio.h>

void main()
{
    int a = 5;
    int i = 0;
    while(i<10){
        i++;
        if (i != a)
        {
            continue;
        }
        else{
            printf("The result is %d", i);
        }
    }
}