#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int secret, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    secret = rand() % 100 + 1;  // Random number between 1 and 100

    printf("🎮 Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100...\n");

    // Game loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess < secret) {
            printf("Too low! 📉 Try again.\n");
        } else if(guess > secret) {
            printf("Too high! 📈 Try again.\n");
        } else {
            printf("🎉 Correct! You guessed it in %d tries.\n", attempts);
        }

    } while(guess != secret);

    return 0;
}
