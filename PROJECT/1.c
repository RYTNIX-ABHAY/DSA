
  #include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed;
do
{
 printf("guess the number :");
 scanf("%d",&guessed);
 no_of_guesses++;
 if(guessed>randomNumber){
  printf("guessed number is greater\n");
 }
 if(guessed<randomNumber){
  printf("guessed number is lesser\n");
 }
} while (guessed!=randomNumber);

  printf("you guesses the number in %d guesses",no_of_guesses);

    return 0;
    }