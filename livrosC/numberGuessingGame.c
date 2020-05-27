/* Guess the number*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guesses;
    
    srand(time(0)); 
    
    number = rand() % 21;
    
    //printf("%i", number);
    
    guesses = 5;
    
    while(guesses >= 0){
        
        printf("What's your guess?\n");
        scanf("%i", &guess);
    
        if(guess == number){
            
            printf("Congratulations, you got it right!");
            break;
            
        } else if (guess > number){
            
            printf("Your guess is greater than the number.\n");
            
        } else {
            
             printf("Your guess is less than the number.\n");
            
        }
        
        if(guesses > 0 && number != guess){
            
            printf("You have %i guess(es) left.\n", guesses);
            
        } else if (guesses == 0 && number != guess){
            
            printf("You have no guesses left. The right number was %i.\n", number);
            break;
            
        }
        
        guesses--;
    
    }

    return 0;
}
