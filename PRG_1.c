/*PRG 1 : NUMBER GUESSING GAME
  we will write a prg that generates a random number and 
  ask thr user to guess it . if the user's guess is higher
  than the actual no. , the program displays "Lower number
  pls" . similarly , if the user's guess is too low than 
  the actual no. , the program displays "higher number
  pls" .
  when the user guesses the  correct number , the program 
  displays the number of guesses the player used to arrive 
  at the number. 
*/
#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    // int randomNumber = rand();
    
    // Print the random number
    // printf("Random Number: %d\n", randomNumber);
    
    // Optional: Generate a random number between 1 and 100
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    // printf("Random Number between 1 and 100: %d\n", randomInRange);
    
    
    do {
        printf("Guess the number :");
        scanf("%d",&guessed);
        if(guessed<randomnumber){
            printf("higher number please\n");
        }
        else if(guessed>randomnumber){
            printf("lower number please\n");    
        }
        else{
            printf("congrats!!\n");
        }

        no_of_guesses++;


    }while(guessed!=randomnumber);

    printf("Finally u guessed the number %d in %d guesses",randomnumber, no_of_guesses);
    return 0;
}
