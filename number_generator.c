// Number generator system

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;
    // printf("Number is : %d", number);
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {           
            printf("Lower number please !! \n");
        }
        else if (guess < number)
        {
            printf("Higher number please !!\n");
        }
        else
        {
            printf("You guessed the right number in %d attempts", nguesses);
        }
        nguesses++;  
    } while (guess!=number);
    
}