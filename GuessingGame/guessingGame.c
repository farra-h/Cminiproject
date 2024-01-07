#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
            // setting NULL to avoid returning a time
    srand(time(NULL)); // to generate a different sequence of numbers every time the program is run

    int guessingNum;
    int guessingchance;
    int theguess;

    // Seting a random number from 0 to 9
    guessingNum = rand() % 10;


    // Set how many you want them to try the guess
    guessingchance = 3;

    printf("Welcome to \"The Guessing Game\"\n");
    printf("You have three attempts to try the Guessing!!\n");

    for( int i=1; i<=guessingchance; i++ ) {

        printf("Guess Number %d: ", i);
        scanf("%d", &theguess);

        if( theguess == guessingNum ){
            printf("You Won!!");
            return 0;
        }
        if( i!=guessingchance && theguess != guessingNum ){
            printf("Wronge, Try again!\n");
        }

    }

    if( theguess != guessingNum ){
            printf("You Lost\n");
            printf("The Number is %d", guessingNum);
        }

    return 0;
}