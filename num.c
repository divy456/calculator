#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int randomNumber = 0;
  int guess = 0;
  int numberofguesses ;
  time_t t;
  // initilisation of number generator//
   srand ((unsigned) time(&t));

   //get the random number//
   randomNumber = rand() % 21;

   printf("\nThis is the guessing game.");
   printf("\nI have choosen number between 0-20, which you must guess. \n");

   for(numberofguesses = 5; numberofguesses> 0; --numberofguesses ) 
   {
    printf("\nYou have %d tr%s left.", numberofguesses, numberofguesses == 1 ? "y": "ies");
    printf("\nEnter a guess: ");
    scanf( "%d", &guess);
    
    if (guess == randomNumber)
    {
      printf("\nCongratulations. You guessed it!\n");
      return;
    }
    else if(guess < 0 ||  guess > 20) // checking for invalid case
     printf("I said the number is between 0 and 20.\n");
     else if( randomNumber > guess)
     printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
     else if( randomNumber < guess)
     printf("Sorry, %d is wrong. My number is less than that.\n", guess);
   }
   printf("\nYou have five tries and failed. The number was %d\n", randomNumber);

  return 0;
}