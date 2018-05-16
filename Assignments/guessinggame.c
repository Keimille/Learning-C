#include <stdio.h>  // for standard I/O operations
#include <time.h>   // for time function
#include <stdlib.h> // for rand function

int main(){
  printf("***********************************************************\n");
  printf("**----------------Welcome to Guessing Game---------------**\n");
  printf("**---------You can guess if you understand the MATH -----**\n");
  printf("**---------------------------------------------------------\n");
  printf("\n\n");
  
  const int MAX_CHANCES = 7;  // a constant, to hold the Maximum possible chances

  int computer_guess;  // for storing the guess by this program.

  // get the current system time that we will use as seed
  long seed = time(NULL);
  // set the seed using the srand function
  srand(seed);

  // let your program guess a 2 digit number
  computer_guess = rand() % 100;

  // Prompt the user
  printf("Program has guessed a number, what you need to do is match it.\n");
  printf("Remember, you have only 7 chances.\n");
  printf("Best wishes...\n\n");

  int user_guess; // to store the input from user.

  int chance_count = 1; // to store chance number, maximum is MAX_CHANCES(7)
  int match = 0;        // if user successfully guessed the number, then assign 1 to this variable
                        // initially it is 0 as user yet to find the number.
    if (chance_count == user_guess)
  // iterate in a loop, as long as not found and chance_count <= MAX_CHANCES
  // Instruction: Offcourse, it is your task to write the condition for the while loop
  while(/*as long as match is false and chances are <= MAX_CHANCES*/){ // 20 Marks
    // prompt the user to enter their guess.
    printf("Enter your number: ");
    // get that input in user_guess
    scanf("%d", &user_guess);
    // if the user_guess is greater than the computer_guess, then print "Your guess is high",
    // also print, number of steps remaining.
    if (/* write the condition */){                     // 10 Marks
      printf("Your guess is high\n");
      // write a printf to print the remaining chances  // 5 Marks
    }
    // other wise if the user_guess is less than the computer_guess then, print "Your guess is low"
    // also print number of steps remaining.
    else if(/* write the condition */){                 // 10 Marks
      printf("Your guess is low \n");
      // write a printf to print the remaining chances  // 5 Marks
    }
    // if they match, print "Bingo!! You have won the game.", also print number
    // of steps that the user took to find the number. You need to do something
    // to come out of the loop as the user found the number, do that here.
    else{
      // You will be here only if the user input matches with the number
      // guessed by your program.
      // complete this section...                     // 20 marks
    }
    printf("\n\n");
    chance_count++;  // increment the chance_count for the next iteration.
  } // end of while

  // you can be out of the above loop in either of 2 cases, when the user guessed
  // the number correctly or they have failed to guess that in all 7 steps.
  // For the second case you need to print "Game Over" message.
  // if not match, then print "Game over!!! Try to be Mathemetical."
  if (/* complete the condition */){                // 10 marks
    // print the game over message.                 // 5 marks
  }
  return 0;
}
