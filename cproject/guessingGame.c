#include<stdio.h>

int main() {

    int guessingNum;
    int guessingchance;
    int theguess;

    // Set the number that you want them to guess it
    guessingNum = 7;

    // Set how many you want them to try the guess
    guessingchance = 3;

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
            printf("You Lost");
        }

    return 0;
}