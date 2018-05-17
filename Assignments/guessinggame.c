#include <stdio.h>  // for standard I/O operations
#include <time.h>   // for time function
#include <stdlib.h> // for rand function

int main(){
  printf("***********************************************************\n");
  printf("**----------------Welcome to Guessing Game---------------**\n");
  printf("**---------You can guess if you understand the MATH -----**\n");
  printf("**---------------------------------------------------------\n");
  printf("\n");
  
  const int MAX_CHANCES = 7;  // a constant, to hold the Maximum possible chances

  int computer_guess;

  long seed = time(NULL);
  
  srand(seed);

  computer_guess = rand() % 100;

  // Prompt the user
  printf("Program has guessed a number, what you need to do is match it.\n");
  printf("Remember, you have only 7 chances.\n");
  printf("Best wishes...\n");

  int user_guess;
  int steps;
  
  int chance_count = 1; // to store chance number, maximum is MAX_CHANCES(7)
  int match = 0;        // if user successfully guessed the number, then assign 1 to this variable
                        // initially it is 0 as user yet to find the number.
    if (chance_count == user_guess)
        match++;
  // iterate in a loop, as long as not found and chance_count <= MAX_CHANCES
  // Instruction: Offcourse, it is your task to write the condition for the while loop
  while (match == 0 && chance_count <= MAX_CHANCES) {
   
    printf("Enter your number: ");
 
    scanf("%d", &user_guess);
    steps = MAX_CHANCES - chance_count;
   
    // also print, number of steps remaining.
    if (user_guess > computer_guess){                    
      printf("Your guess is high\n");
      printf("you have %d s remaining" , steps);
     
    }
    // also print number of steps remaining.
    else if(user_guess < computer_guess){                 
      printf("Your guess is low \n");
      printf("you have %d s remaining" , steps);
    }
   
    // to come out of the loop as the user found the number, do that here.
    else if (match = 1){
        printf("Bingo!! You have won the game.");
        printf("%d steps taken to solve this problem", chance_count);
    }
    printf("\n\n");
    chance_count++;  // increment the chance_count for the next iteration.
  } // end of while

  if (MAX_CHANCES == 7 ){ 
    printf("Game over Man! GAME OVER!!!");} 
    else if (match == 1) {
        printf("Great Job! Game Over");
    }  
  return 0;
}
