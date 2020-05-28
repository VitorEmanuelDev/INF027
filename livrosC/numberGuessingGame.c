/* Guess the number*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guesses;
    
    srand(time(0)); 
    
    number = rand() % 20;
    
    //printf("%i", number);
    
    guesses = 5;
    
    while(guesses >= 0){
        
        printf("What's your guess?\n");
        scanf("%i", &guess);
        
        if(guess < 0 || guess > 20){
            
            printf("Invalid input.");
            break;
            
        }
    
        if(guess == number){
            
            printf("Congratulations, you got it right!");
            break;
            
        } else if (guess > number){
            
            printf("Your guess is greater than the number.\n");
            
        } else {
            
             printf("Your guess is less than the number.\n");
            
        }
        
        if(guesses > 0 && number != guess){
            
            if(guesses < 2){
                
                printf("You have %i guess left.\n", guesses);
                
            } else {
                
                printf("You have %i guesses left.\n", guesses);
                
            }
            
            
        } else if (guesses == 0 && number != guess){
            
            printf("You have no guesses left. The right guess was %i.\n", number);
            break;
            
        }
        
        guesses--;
    
    }
   
    return 0;
}
