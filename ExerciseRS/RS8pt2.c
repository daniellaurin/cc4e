#include <stdio.h>

int main() {
    int guess;

    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            // If we can't read an integer, we assume EOF or error and break the loop
            break;
        }

        if (guess == 42) {
            printf("Nice work!\n");
            break;
        } else if (guess < 42) {
            printf("Too low - guess again\n");
        } else {
            printf("Too high - guess again\n");
        }
    }

    return 0;
}
