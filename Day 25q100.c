#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int secret = rand() % 10 + 1, guess;
    do {
        printf("Guess (1-10): "); scanf("%d", &guess);
        if(guess > secret) printf("Lower!\n");
        else if(guess < secret) printf("Higher!\n");
    } while(guess != secret);
    printf("Correct!");
    return 0;
}